/* 
 * File Stream.cxx
 * This file has been auto-generated by Y2CPP, the
 * plug-in of pyang.
 */ 
#include "SAFplusLogCommon.hxx"

#include "StreamStatistics.hxx"
#include <vector>
#include "MgtFactory.hxx"
#include <string>
#include "StreamStatistics.hxx"
#include "StreamAttributes.hxx"
#include "Stream.hxx"


namespace SAFplusLog
  {

    /* Apply MGT object factory */
    MGT_REGISTER_IMPL(Stream, /SAFplusLog/StreamConfig/stream)

    Stream::Stream()
      :fileBuffer(SAFplusI::LogDefaultFileBufferSize),msgBuffer(SAFplusI::LogDefaultMessageBufferSize),fp(NULL)  // additions 
    {
        this->name.assign("stream");
    };

    Stream::Stream(std::string myNameValue)
      :fileBuffer(SAFplusI::LogDefaultFileBufferSize),msgBuffer(SAFplusI::LogDefaultMessageBufferSize),fp(NULL)  // additions 
    {
        this->myName.value =  myNameValue;
        this->name.assign("stream");
    };

    std::vector<std::string> Stream::getKeys()
    {
        std::string keyNames[] = { "myName" };
        return std::vector<std::string> (keyNames, keyNames + sizeof(keyNames) / sizeof(keyNames[0]));
    };

    std::vector<std::string>* Stream::getChildNames()
    {
        std::string childNames[] = { "myName", "fileName", "replicate", "fileLocation", "fileUnitSize", "recordSize", "fileFullAction", "maximumFilesRotated", "flushFreq", "flushInterval", "syslog", "streamScope", "StreamStatistics" };
        return new std::vector<std::string> (childNames, childNames + sizeof(childNames) / sizeof(childNames[0]));
    };

    /*
     * XPATH: /SAFplusLog/StreamConfig/stream/StreamStatistics
     */
    SAFplusLog::StreamStatistics* Stream::getStreamStatistics()
    {
        return dynamic_cast<StreamStatistics*>(this->getChildObject("StreamStatistics"));
    };

    /*
     * XPATH: /SAFplusLog/StreamConfig/stream/StreamStatistics
     */
    void Stream::addStreamStatistics(SAFplusLog::StreamStatistics *StreamStatisticsValue)
    {
        this->addChildObject(StreamStatisticsValue, "StreamStatistics");
    };

    Stream::~Stream()
    {
    };

}
/* namespace SAFplusLog */