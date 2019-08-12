#ifndef PS_SOCK_PROTOCOLSTACK_EVENTDEFS_H
#define PS_SOCK_PROTOCOLSTACK_EVENTDEFS_H
/*===========================================================================
  @file PS_Sock_ProtocolStack_EventDefs.h

  This file defines platform socket specific events that are generated by
  ProtocolStack.

  Copyright (c) 2008 Qualcomm Technologies Incorporated.
  All Rights Reserved.
  Qualcomm Confidential and Proprietary
===========================================================================*/

/*===========================================================================

                        EDIT HISTORY FOR MODULE

  $Header: //commercial/MPSS.JO.2.0.c1.4/Main/modem_proc/datamodem/interface/pssock/src/PS_Sock_ProtocolStack_EventDefs.h#1 $
  $DateTime: 2016/12/13 08:00:03 $ $Author: mplcsds1 $

===========================================================================*/

/*===========================================================================

                     INCLUDE FILES FOR MODULE

===========================================================================*/
#include "comdef.h"


/*===========================================================================

                      PUBLIC DATA DECLARATIONS

===========================================================================*/
namespace PS
{
  namespace Sock
  {
    namespace ProtocolStack
    {
      /**
        @brief Data type for ProtocolStack events.

        Defines a data type for the platform specific events that are
        generated by the PS Stack.

        @see PS::Sock::ProtocolStack::Event
      */
      typedef int32  EventType;

      /**
        @brief List of events that are generated by the PS Stack.

        Defines events that are generated by the PS Stack. These events are
        specific to one platform socket.

        @see PS::Sock::ProtocolStack::IEventListener
      */
      namespace Event
      {
        /**
          @brief TCP socket is connected to its peer.

          Posted when a TCP socket has successfully completed 3-way handshake
          with its peer and established a connection. Upon receiving this
          event, platform socket moves to OPEN state. It also obtains the peer
          address (otherwise platform wouldn't know peer of accepted sockets),
          MSS, all the negotiated socket options and updates its cache.
        */
        const EventType  TCP_CONNECTED  = 0;

        /**
          @brief PCB is closed.

          Posted when PCB is closed. For TCP, this event indicates when the
          socket goes to TIME_WAIT or CLOSED state.

          Since lifetime of platform socket is managed by refCnt, this event
          is posted for UDP and ICMP sockets as well. It indicates that
          ProtocolStack no longer keeps track of platform socket, and that
          ProtocolStack is not going to post any more events on the socket.
          So platform can safely delete the socket.
        */
        const EventType  PCB_CLOSED     = 1;

        /**
          @brief Posted on receiving ICMP errors from network.

          TCP and UDP sockets could receive ICMP errors from the network. If
          the application has set SO_ERROR_ENABLE socket option, these errors
          need to be propagated to the application so that it can take some
          action. So this event is posted whenever an ICMP error is received
          and platform relays the error to the application at the next
          oppurtunity if SO_ERROR_ENABLE option is set.
        */
        const EventType  ICMP_ERROR     = 2;

        /**
          @brief UDP socket is connected.

          Posted when connect() is successfully processed by ProtocolStack for
          UDP socket. Once it is connected, UDP socket is bound to a specific
          interface and has a specific local IP address. Since platform
          doesn't know the IP address of the interface, and since it is ideal
          to not use network APIs in sockets platform, ProtocolStack posts
          event to propagate local IP address to the platform. Platform stores
          the local IP address in its cache and returns to the application
          when GetSockName() is called.
        */
        const EventType  UDP_CONNECTED  = 3;
      };
    } /* namespace ProtocolStack */
  } /* namespace Sock */
} /* namespace PS */

#endif /* PS_SOCK_PROTOCOLSTACK_EVENTDEFS_H */
