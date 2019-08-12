#ifndef QDI_CONSTANTS_H
#define QDI_CONSTANTS_H

/**
  @file qurt_qdi_constants.h

  @brief  Predefined invocation methods for drivers.  

 EXTERNALIZED FUNCTIONS
  none

 INITIALIZATION AND SEQUENCING REQUIREMENTS
  none

 Copyright (c) 2013  by Qualcomm Technologies, Inc.  All Rights Reserved.
 Confidential and Proprietary - Qualcomm Technologies, Inc..
 ======================================================================*/



/*
||  Method numbers used for QDI
||
||  Here is the intended grouping of method numbers for QDI
||   including future usage:
||
||   Method 0 should always be unused and not responded to by
||    any driver.
||   Methods 1 and 2 are reserved for name registration and
||    name lookup.
||   Methods 3 through 31 are reserved for POSIX-type operations
||    on open handles.
||   Methods 32 through 127 are reserved for the QDI infrastructure
||    and may be extended in the future to provide standard
||    driver debug services, management services, and system
||    notifications.
||   Methods 128 through 255 are reserved for the use of automatically
||    generated methods such as might be generated by an IDL (interface
||    definition language).  The infrastructure may be extended to
||    perform services on these methods based on information provided
||    by the IDL, such as automatic buffer validation, etc.  These
||    method numbers should not be used for any "ad hoc" methods.
||   Methods with number >= 256 are "private" method numbers which are
||    outside the scope of the QDI infrastructure.  Drivers which want
||    to generate and consume their own "ad hoc" methods are free to
||    use these method numbers as they wish.  The infrastructure will
||    not generate these method numbers or respond to them, but will
||    pass them on unmolested.
||
||   Note that all driver implementations *should* return a value of
||    -1 when called with an unsupported method.  The standard error
||    return value for POSIX APIs is -1, so we emulate that behavior
||    here.
*/

#define QDI_UNUSED              0
#define QDI_DEVNAME_REGISTER    1
#define QDI_OPEN                2
#define QDI_CLOSE               3
#define QDI_READ                4
#define QDI_WRITE               5
#define QDI_IOCTL               6
#define QDI_MMAP                7

#define QDI_CLIENT_HANDLE_OBJREF_GET    10

#define QDI_OS_DUMP_PROCESS_EXIT        11
#define QDI_OS_PROCESS_LOAD             12
#define QDI_OS_PROCESS_CHOOSE_ASID      13
#define QDI_ISLAND_SPEC_CREATE          14
#define QDI_ISLAND_ENTER                15
#define QDI_ISLAND_PING                 16

#define QDI_SWITCH_TO_ISLAND_MODE        17
#define QDI_SWITCH_TO_NORMAL_MODE        18
#define QDI_ISLAND_CHECK_ALLOC           19

#define QDI_THREAD_ENTER_LOCAL          33
#define QDI_THREAD_LEAVE_LOCAL          34
#define QDI_THREAD_ENTER_TRUSTED        35
#define QDI_THREAD_LEAVE_TRUSTED        36
#define QDI_OS_EXCEPTION_WAIT           37
#define QDI_CLIENT_ERROR_HANDLER        38
#define QDI_OS_PROCESS_EXIT             39
#define QDI_OS_PROCESS_KILL             40
#define QDI_OS_PROCESS_KILL_INTERNAL    101    
#define QDI_CLIENT_HANDLE_HANDLE_CREATE_FROM_OBJ_T 80
#define QDI_CLIENT_HANDLE_HANDLE_RELEASE           81
#define QDI_CLIENT_HANDLE_COPY_FROM_USER           82
#define QDI_CLIENT_HANDLE_COPY_TO_USER             83
#define QDI_CLIENT_HANDLE_USER_MALLOC              84
#define QDI_CLIENT_HANDLE_USER_FREE                85
#define QDI_CLIENT_HANDLE_SIGNAL_GROUP_CREATE      86
#define QDI_CLIENT_HANDLE_BUFFER_LOCK   41
#define QDI_CLIENT_USER_MALLOC          42
#define QDI_CLIENT_USER_FREE            43
#define QDI_CLIENT_HLOSPOOL_INFO_GET    90
#define QDI_OS_MEM_POOL_ADD             91
#define QDI_CLIENT_HLOSPOOL_ADD         92
#define QDI_OS_MEM_POOL_CREATE          93
#define QDI_OS_MEM_LOCKED_RECLAIM       94
#define QDI_CLIENT_SET_USERMALLOC       95       
#define QDI_OS_MEM_POOL_ADD_PAGES       20
#define QDI_OS_MEM_POOL_REMOVE_PAGES    21

#define QDI_CLIENT_ASID                 44
#define QDI_OS_THREAD_CREATE            45
#define QDI_OS_SPAWN_FLAGS              46
#define QDI_OS_WAIT                     47
#define QDI_OS_CLIENT_INFO_GET          48
#define QDI_OS_THREAD_EXIT              49

#define QDI_OS_MEM_POOL_ATTACH          50
#define QDI_OS_MEM_REGION_CREATE        51
#define QDI_OS_MEM_REGION_GET_ATTR      53
#define QDI_OS_MEM_REGION_QUERY         54
#define QDI_OS_MEM_CREATE_MAPPING       55
#define QDI_OS_MEM_REMOVE_MAPPING       56
#define QDI_OS_MEM_LOOKUP_PHYSADDR      57
#define QDI_OS_DYN_REGION_QUERY         58
#define QDI_OS_MEM_FS_CHANGE_ATTR       59
#define QDI_OS_MEM_FS_REGION_CREATE     60
#define QDI_OS_MEM_FS_GET_VA            64
#define QDI_OS_MEM_FS_REGION_DELETE     65
#define QDI_OS_MEM_FS_REGION_QUERY      66
#define QDI_OS_MEM_POOL_GET_ATTR        67
#define QDI_OS_THREAD_ITERATOR_CREATE   68
#define QDI_OS_THREAD_ITERATOR_NEXT     69

#define QDI_REGION_SET_USERMALLOC       70

#define QDI_OS_GETPID                   61
#define QDI_OS_THREAD_JOIN              62
#define QDI_OS_GET_HANDLE_TABLE         63
#define QDI_OS_THREAD_GET_ATTR          102

#define QDI_OS_THREAD_GET_NAME          71
#define QDI_OS_THREAD_GET_PRIO          72
#define QDI_OS_THREAD_GET_PCYCLES       73
#define QDI_OS_THREAD_GET_SBASE         74
#define QDI_OS_THREAD_GET_SSIZE         75

#define QDI_OS_PROCESS_GET_NAME         76
#define QDI_OS_PROCESS_GET_ID           77
#define QDI_OS_SYSENV                   78

#define QDI_OS_TIMER_CREATE             80
#define QDI_OS_TIMER_STOP               81
#define QDI_OS_TIMER_DELETE             82
#define QDI_OS_TIMER_RESTART            83
#define QDI_OS_TIMER_SLEEP              84
#define QDI_OS_TIMER_GET_ATTR           85
#define QDI_OS_TIMER_GET_TICKS          86
#define QDI_OS_TIMER_GROUP_ENABLE       87
#define QDI_OS_TIMER_GROUP_DISABLE      88
#define QDI_OS_TIMER_RECOVER_PC         89

#define QDI_OS_SCLK_GET_TICKS          90

#define QDI_SIGNAL_GROUP_SIGNAL_CREATE          96
#define QDI_SIGNAL_GROUP_WAIT                   98
#define QDI_SIGNAL_GROUP_POLL                   99
#define QDI_SIGNAL_SET                          96
#define QDI_SIGNAL_CLEAR                        97
#define QDI_SIGNAL_WAIT                         98
#define QDI_SIGNAL_POLL                         99

#define QDI_OS_DEBUG_MONITOR_CTRL               100

#define QDI_PRIVATE             256  /* Method numbers beginning at 256
                                        are private method numbers which
                                        are device-specific and available
                                        for use by device implementors. */

/*
||  Permission bitmasks for use with qurt_qdi_lock_buffer()
||
||  These numbers are chosen to match the POSIX file
||   permission bitmasks.
*/

#define QDI_PERM_W              2
#define QDI_PERM_R              4
#define QDI_PERM_RW             6

#define QDI_HANDLE_LOCAL_CLIENT         3
#define QDI_HANDLE_GENERIC              4

#define QDI_REFCNT_BASE   0x510000
#define QDI_REFCNT_MAXED  0x51FFFD
#define QDI_REFCNT_INIT   0x51FFFE
#define QDI_REFCNT_PERM   0x51FFFF

/*
||  Flags used by process loaders.
*/

#define QDI_OS_PROCESS_FLAGS_ISLAND_RESIDENT    0x1     /* Set this flag to request the loaded process
                                                           to have island residency */

#endif /* QDI_CONSTANTS_H */
