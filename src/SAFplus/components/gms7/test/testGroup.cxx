// Standard includes
#include <string>

// SAFplus includes
#include <clHandleApi.hxx>
#include <clLogApi.hxx>
#include <clIocApi.h>
#include <clGroup.hxx>
#include <clGlobals.hxx>
#include <clNameApi.hxx>
#include <clGroupIpi.hxx>  // only for debug -- dumping the group shared memory

using namespace SAFplus;
using namespace std;
//int testCapabilities(int mode);
//int testGroupElect(int mode);
//int testGetData(int mode);
//int testGroupIterator(int mode);
int testRegisterAndDeregister(int mode);

static unsigned int MAX_MSGS=25;
static unsigned int MAX_HANDLER_THREADS=2;
ClBoolT   gIsNodeRepresentative = CL_FALSE;

namespace SAFplusI
{
extern GroupSharedMem gsm;
};

int main(int argc, char* argv[])
{
  SAFplus::ASP_NODEADDR = 1;
  logEchoToFd = 1;  // echo logs to stdout for debugging
  logSeverity = LOG_SEV_MAX;

  safplusInitialize(SAFplus::LibDep::GRP);

  safplusMsgServer.init(50, MAX_MSGS, MAX_HANDLER_THREADS);
  safplusMsgServer.Start();

  testRegisterAndDeregister(0);

  return 0;
}


int testRegisterAndDeregister(int mode)
{
  const std::string s = __FUNCTION__;

  Handle gh1 = Handle::create();

  Group grpa1(gh1);
  sleep(1);
  SAFplusI::gsm.dbgDump();  // should be just the one group.

  Handle e1 = Handle::create();
  grpa1.registerEntity(e1,1,Group::ACCEPT_STANDBY | Group::ACCEPT_ACTIVE);
  sleep(1);
  SAFplusI::gsm.dbgDump();  // should be just the one group + one entity.

  grpa1.deregister();
  sleep(1);
  SAFplusI::gsm.dbgDump();  // should be just the one group

  Handle e2 = Handle::create();
  grpa1.registerEntity(e1,1,Group::ACCEPT_STANDBY | Group::ACCEPT_ACTIVE);
  Group grpa2(gh1);
  grpa2.registerEntity(e2,2,Group::ACCEPT_STANDBY | Group::ACCEPT_ACTIVE);
  sleep(1);
  SAFplusI::gsm.dbgDump();  // should be just the one group + 2 entities.

  Handle gh2 = Handle::create();
  Group grpb1(gh2);
  Group grpb2(gh2);
  grpb1.registerEntity(e1,3,Group::ACCEPT_STANDBY | Group::ACCEPT_ACTIVE);
  grpb2.registerEntity(e2,4,Group::ACCEPT_STANDBY | Group::ACCEPT_ACTIVE);
  sleep(1);

  logInfo("TEST","GRP", "Iterator Test");
  Group::Iterator i;
  char buf[100];
  for (i=grpb1.begin(); i != grpb1.end(); i++)
    {
    const GroupIdentity& gid = i->second;
    logInfo("TEST","GRP", "Entity [%lx:%lx] on node [%d] credentials [%ld] capabilities [%d] %s\n", gid.id.id[0],gid.id.id[1],gid.id.getNode(),gid.credentials, gid.capabilities, Group::capStr(gid.capabilities,buf));
    }

  SAFplusI::gsm.dbgDump();  // should be 2 groups + 2 entities.  The same handles can join multiple groups...

  assert(0); // force failure without running deregister

  return 0;
}