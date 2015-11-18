#include "ReliableFragment.hxx"
namespace SAFplus
{
  ReliableFragment::ReliableFragment()
  {
    // To do
    this->m_nAckn=-1;
    this->m_nRetCounter=0;
  }
  int ReliableFragment::flags()
  {
    return m_nFalgs;
  }
  int ReliableFragment::length()
  {
    return m_nLen;
  }
  int ReliableFragment::seq()
  {
    return m_nSeqn;
  }
  int ReliableFragment::getAck()
  {
    if(m_nFalgs & ACK_FLAG)
    {
      return m_nAckn;
    }
    return -1;
  }


  int ReliableFragment::getRetxCounter()
  {
    return m_nRetCounter;
  }
  void ReliableFragment::setAck(int _ackn)
  {
    m_nFalgs = m_nFalgs | ACK_FLAG;
    m_nAckn = _ackn;
  }

  void ReliableFragment::setRetxCounter(int _retCounter)
  {
    m_nRetCounter = _retCounter;
  }

  fragmentType ReliableFragment::getType()
  {
    fragmentType temp;
    switch (m_nFalgs)
    {
      case SYN_FLAG:
      {
        temp=FRAG_SYN;
        break;
      }
      case ACK_FLAG:
      {
        temp=FRAG_DATA;
        break;
      }
      case NAK_FLAG:
      {
        temp=FRAG_NAK;
        break;
      }
      case RST_FLAG:
      {
        temp=FRAG_RST;
        break;
      }
      case NUL_FLAG:
      {
        temp=FRAG_NUL;
        break;
      }
      case CHK_FLAG:
      {
        temp=FRAG_UDE;
        break;
      }
      case FIN_FLAG:
      {
        temp=FRAG_FIN;
        break;
      }
      default:
      {
        temp=FRAG_UDE;
        break;
      }
    }
    return temp;
  }
  Byte* ReliableFragment::getHeader()
  {
    Byte *pBuffer = new Byte[RUDP_HEADER_LEN];
    pBuffer[0] = (Byte) (m_nFalgs & 0xFF);
    pBuffer[1] = (Byte) (m_nLen & 0xFF);
    pBuffer[2] = (Byte) (m_nSeqn & 0xFF);
    pBuffer[3] = (Byte) (m_nAckn & 0xFF);
    return pBuffer;
  }

  int ReliableFragment::setHeader(void* ptr)
  {
    ((Byte*)ptr)[0] = (Byte) (m_nFalgs & 0xFF);
    ((Byte*)ptr)[1] = (Byte) (m_nLen & 0xFF);
    ((Byte*)ptr)[2] = (Byte) (m_nSeqn & 0xFF);
    ((Byte*)ptr)[3] = (Byte) (m_nAckn & 0xFF);
    return RUDP_HEADER_LEN;
  }


  void ReliableFragment::init(int _flags, int _seqn, int len, int isLastFrag)
  {
    m_nFalgs = _flags;
    m_nSeqn = _seqn;
    m_nLen = len;
  }

  void ReliableFragment::parseHeader(const Byte* buffer, int _off, int _len)
  {
    m_nFalgs = int(buffer[_off] & 255);
    m_nLen   = int(buffer[_off+1] & 255);
    m_nSeqn  = int(buffer[_off+2] & 255);
    m_nAckn  = int(buffer[_off+3] & 255);
  }

  ReliableFragment* ReliableFragment::parse(Byte* bytes, int off, int len)
  {
    ReliableFragment *fragment = nullptr;
    if (len < RUDP_HEADER_LEN)
    {
      // throw new IllegalArgumentException("Invalid segment");
      throw Error("Invalid segment");
    }
    int flags = bytes[off];
    if ((flags & SYN_FLAG) != 0)
    {
      logTrace("MSG","FRT","parse SYN fragment");
      fragment = new SYNFragment();
    }
    else if ((flags & NUL_FLAG) != 0)
    {
      logTrace("MSG","FRT","parse NUL fragment");
      fragment = new NULLFragment();
    }
    else if ((flags & NAK_FLAG) != 0)
    {
      logTrace("MSG","FRT","parse NAK fragment");
      fragment = new NAKFragment();
    }
    else if ((flags & RST_FLAG) != 0)
    {
      logTrace("MSG","FRT","parse RST fragment");
      fragment = new RSTFragment();
    }
    else if ((flags & FIN_FLAG) != 0)
    {
      logTrace("MSG","FRT","parse FIN fragment");
      fragment = new FINFragment();
    }
    else if ((flags & ACK_FLAG) != 0)
    {
      /* always process ACKs or Data segments last */
      if ((flags & LAS_FLAG) != 0)
      {
        logTrace("MSG","FRT","parse LAST fragment");
        fragment = new DATFragment();
        fragment->setLast(true);
      }
      else
      {
        logTrace("MSG","FRT","parse ACK fragment");
        if (len == RUDP_HEADER_LEN)
        {
          fragment = new ACKFragment();
          fragment->setLast(false);
        }
        else
        {
          fragment = new DATFragment();
          fragment->setLast(false);
        }
      }
    }
    if (fragment == nullptr)
    {
      //throw new IllegalArgumentException("Invalid segment");
      throw Error("Invalid segment");
    }
    fragment->parseHeader(bytes, off, len);
    return fragment;
  }

  ReliableFragment* ReliableFragment::parse(Byte* bytes)
  {
    int length = 0;
    return ReliableFragment::parse(bytes, 0, length);
  }
  //--- End Reliable Fragment

  //------------------------------
  // Data Fragment
  //------------------------------
  DATFragment::DATFragment()
  {

  }

  DATFragment::DATFragment(int seqn, int ackn,Byte* buffer, int off, int len , bool isLastFrag)
  {
    if(isLastFrag==true)
    {
      init(LAS_FLAG, seqn, len);
    }
    else
    {
      init(ACK_FLAG, seqn, len);
    }
    setAck(ackn);
    m_pData =  buffer + off;
    memcpy(m_pData ,buffer+off, len);
  }

  int DATFragment::length()
  {
    return m_nLen;
  }

  Byte* DATFragment::getData()
  {
    return m_pData;
  }

  Byte* DATFragment::getHeader()
  {
    Byte* buffer = ReliableFragment::getHeader();
    return buffer;
  }

  void DATFragment::parseHeader(const Byte* buffer, int _off, int _len)
  {
    ReliableFragment::parseHeader(buffer, _off, _len);

  }
  void DATFragment::parseData(const Byte* buffer, int _off, int _len)
  {
    m_nLen = _len ;
    m_pData = new Byte[m_nLen];
    memcpy(m_pData, buffer + _off, m_nLen);
  }
  fragmentType DATFragment::getType()
  {
    return FRAG_DATA;
  }

  DATFragment::~DATFragment()
  {
    delete m_pData;
  };
  // End DATFragment class
  SYNFragment::SYNFragment()
  {

  }

  SYNFragment::SYNFragment(int seqn, int maxseg, int maxsegsize, int rettoval,
      int cumacktoval, int niltoval, int maxret,
      int maxcumack, int maxoutseq, int maxautorst)
  {
    init(SYN_FLAG, seqn, SYN_HEADER_LEN);
    m_nVersion = RUDP_VERSION;
    m_nMaxseg = maxseg;
    m_nOptflags = 0x01; /* no options */
    m_nMaxsegsize = maxsegsize;
    m_nRettoval = rettoval;
    m_nCumacktoval = cumacktoval;
    m_nNiltoval = niltoval;
    m_nMaxret = maxret;
    m_nMaxcumack = maxcumack;
    m_nMaxoutseq = maxoutseq;
    m_nMaxautorst = maxautorst;
  }
  int SYNFragment::getVersion()
  {
    return m_nVersion;
  }
  int SYNFragment::getMaxOutstandingFragments()
  {
    return m_nMaxseg;
  }

  int SYNFragment::getOptionFlags()
  {
    return m_nOptflags;
  }

  int SYNFragment::getMaxFragmentSize()
  {
    return m_nMaxsegsize;
  }
  int SYNFragment::getRetransmissionTimeout()
  {
    return m_nRettoval;
  }
  int SYNFragment::getCummulativeAckTimeout()
  {
    return m_nCumacktoval;
  }
  int SYNFragment::getNulFragmentTimeout()
  {
    return m_nNiltoval;
  }

  int SYNFragment::getMaxRetransmissions()
  {
    return m_nMaxret;
  }

  int SYNFragment::getMaxCumulativeAcks()
  {
    return m_nMaxcumack;
  }
  int SYNFragment::getMaxOutOfSequence()
  {
    return m_nMaxoutseq;
  }
  int SYNFragment::getMaxAutoReset()
  {
    return m_nMaxautorst;
  }

  Byte* SYNFragment::getHeader()
  {
    Byte *buffer = ReliableFragment::getHeader();
    return buffer;
  }
  Byte* SYNFragment::getData()
  {
    Byte *buffer = new Byte(16);
    buffer[0] = (Byte) ((m_nVersion << 4) & 0xFF);
    buffer[1] = (Byte) (m_nMaxseg & 0xFF);
    buffer[2] = (Byte) (m_nOptflags & 0xFF);
    buffer[3] = 0; /* spare */
    buffer[4] = (Byte) ((m_nMaxsegsize >> 8) & 0xFF);
    buffer[5] = (Byte) ((m_nMaxsegsize >> 0) & 0xFF);
    buffer[6] = (Byte) ((m_nRettoval >> 8) & 0xFF);
    buffer[7] = (Byte) ((m_nRettoval >> 0) & 0xFF);
    buffer[8] = (Byte) ((m_nCumacktoval >> 8) & 0xFF);
    buffer[9] = (Byte) ((m_nCumacktoval >> 0) & 0xFF);
    buffer[10] = (Byte) ((m_nNiltoval >> 8) & 0xFF);
    buffer[11] = (Byte) ((m_nNiltoval >> 0) & 0xFF);
    buffer[12] = (Byte) (m_nMaxret & 0xFF);
    buffer[13] = (Byte) (m_nMaxcumack & 0xFF);
    buffer[14] = (Byte) (m_nMaxoutseq & 0xFF);
    buffer[15] = (Byte) (m_nMaxautorst & 0xFF);
    return buffer;
  }
  void SYNFragment::parseHeader(const  Byte* buffer, int off, int len)
  {
    ReliableFragment::parseHeader(buffer, off, len);
  }
  void SYNFragment::parseData(const  Byte* buffer, int off, int len)
  {
    if (len < (0) )
    {
      //throw new IllegalArgumentException("Invalid SYN Fragment");
      throw Error("Invalid SYN Fragment");
    }
    m_nVersion = ((buffer[off] & 0xFF) >> 4);
    if (m_nVersion != RUDP_VERSION)
    {
      //throw new IllegalArgumentException("Invalid RUDP version");
      throw Error("Invalid RUDP version");
    }
    m_nMaxseg = (buffer[off + 1] & 0xFF);
    m_nOptflags = (buffer[off + 2] & 0xFF);
    // spare     =  (buffer[off+ 3] & 0xFF);
    m_nMaxsegsize = ((buffer[off + 4] & 0xFF) << 8) | ((buffer[off + 5] & 0xFF) << 0);
    m_nRettoval = ((buffer[off + 6] & 0xFF) << 8) | ((buffer[off + 7] & 0xFF) << 0);
    m_nCumacktoval = ((buffer[off + 8] & 0xFF) << 8) | ((buffer[off + 9] & 0xFF) << 0);
    m_nNiltoval = ((buffer[off + 10] & 0xFF) << 8) | ((buffer[off + 11] & 0xFF) << 0);
    m_nMaxret = (buffer[off + 12] & 0xFF);
    m_nMaxcumack = (buffer[off + 13] & 0xFF);
    m_nMaxoutseq = (buffer[off + 14] & 0xFF);
    m_nMaxautorst = (buffer[off + 15] & 0xFF);
  }
  fragmentType SYNFragment::getType()
  {
    return FRAG_SYN;
  }

  // End-----Syn Fragment Class


  //--------------------------------------------------
  // ACK Fragment
  //--------------------------------------------------
  ACKFragment::ACKFragment()
  {

  }
  ACKFragment::ACKFragment(int seqn, int ackn)
  {
    init(ACK_FLAG, seqn, 0);
    setAck(ackn);
  }
  fragmentType ACKFragment::getType()
  {
    return FRAG_ACK;
  }


  // End ACK Fragment Class

  //-------------------------------------------
  // NAK Fragment
  //-------------------------------------------
  NAKFragment::NAKFragment()
  {
  }

  NAKFragment::NAKFragment(int seqn, int ackn,  int* acks, int size)
  {
    init(NAK_FLAG, seqn, size);
    setAck(ackn);
    m_pArrAcks = (int*)malloc(size);
    m_nNumNak=size;
    m_pArrAcks=acks;
  }

  Byte* NAKFragment::getHeader()
  {
    Byte* buffer= ReliableFragment::getHeader();
    return buffer;
  }
  Byte* NAKFragment::getData()
  {
    Byte* buffer = new Byte(m_nNumNak);
    for (int i = 0; i < m_nNumNak; i++)
    {
      buffer[i] = (Byte) (m_pArrAcks[i] & 0xFF);
    }
    return buffer;
  }

  void NAKFragment::parseHeader(const Byte* buffer, int off, int len)
  {
    ReliableFragment::parseHeader(buffer, off, len);
  }
  void NAKFragment::parseData(const Byte* buffer, int off, int len)
  {
    m_nNumNak = len;
    m_pArrAcks = new int[m_nNumNak];
    for (int i = 0; i < m_nNumNak; i++)
    {
      m_pArrAcks[i] = int(buffer[off + i] & 0xFF);
    }
  }
  fragmentType NAKFragment::getType()
  {
    return FRAG_NAK;
  }
  int* NAKFragment::getACKs(int* length)
  {
    *length= m_nNumNak;
    return m_pArrAcks;
  }

  // End NAK Fragment Class

  //-----------------------------------
  //- FINFragment Class
  //-----------------------------------
  //-----------------------------------
  FINFragment::FINFragment()
  {

  }
  FINFragment::FINFragment(int seqn)
  {
    init(FIN_FLAG, seqn, 0);
  }
  // End FIN Fragment
  fragmentType FINFragment::getType()
  {
    return FRAG_FIN;
  }

  NULLFragment::NULLFragment()
  {

  }
  NULLFragment::NULLFragment(int seqn)
  {
    init(NUL_FLAG, seqn, 0);
  }
  fragmentType NULLFragment::getType()
  {
    return FRAG_NUL;
  }
  // End NULL Fragment class

  RSTFragment::RSTFragment()
  {

  }
  RSTFragment::RSTFragment( int seqn)
  {
    init(RST_FLAG, seqn, 0);
  }
  fragmentType RSTFragment::getType()
  {
    return FRAG_RST;
  }
  // Ed RSTFragment Class.

}

