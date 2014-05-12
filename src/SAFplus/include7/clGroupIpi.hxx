#ifndef clGroupIpi_hxx
#define clGroupIpi_hxx

#include <clSafplusMsgServer.hxx>
#include <clGroup.hxx>
#include <clGlobals.hxx>
#include <clLogApi.hxx>
namespace SAFplus
{
  class Group;
}
namespace SAFplusI
{
  enum class GroupMessageTypeT
  {
    MSG_NODE_JOIN,
    MSG_NODE_LEAVE,
    MSG_ROLE_NOTIFY,
    MSG_ELECT_REQUEST,
    MSG_UNDEFINED
  };
  enum class GroupRoleNotifyTypeT
  {
    ROLE_ACTIVE,
    ROLE_STANDBY,
    ROLE_UNDEFINED
  };

  enum class GroupMessageSendModeT
  {
    SEND_BROADCAST,
    SEND_TO_MASTER,
    SEND_LOCAL_RR, //Round Robin
    SEND_UNDEFINED
  };

  class GroupMessageProtocol
  {
    public:
      GroupMessageTypeT     messageType;
      GroupRoleNotifyTypeT  roleType;
      char                  data[1]; //Not really 1, it will be place on larger memory
      GroupMessageProtocol()
      {
        messageType = GroupMessageTypeT::MSG_UNDEFINED;
        roleType = GroupRoleNotifyTypeT::ROLE_UNDEFINED;
      }
  };

  class GroupMessageHandler:public SAFplus::MsgHandler
  {
    public:
      GroupMessageHandler(SAFplus::Group *grp=nullptr);
      void msgHandler(ClIocAddressT from, SAFplus::MsgServer* svr, ClPtrT msg, ClWordT msglen, ClPtrT cookie);
    private:
      SAFplus::Group* mGroup;
  };
}
#endif // clGroupIpi_hxx