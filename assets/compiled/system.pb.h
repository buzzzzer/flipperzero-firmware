/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_PB_SYSTEM_SYSTEM_PB_H_INCLUDED
#define PB_PB_SYSTEM_SYSTEM_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _PB_System_RebootRequest_RebootMode { 
    PB_System_RebootRequest_RebootMode_OS = 0, 
    PB_System_RebootRequest_RebootMode_DFU = 1 
} PB_System_RebootRequest_RebootMode;

/* Struct definitions */
typedef struct _PB_System_DeviceInfoRequest { 
    char dummy_field;
} PB_System_DeviceInfoRequest;

typedef struct _PB_System_DeviceInfoResponse { 
    char *key; 
    char *value; 
} PB_System_DeviceInfoResponse;

typedef struct _PB_System_FactoryResetRequest { 
    char dummy_field;
} PB_System_FactoryResetRequest;

typedef struct _PB_System_PingRequest { 
    pb_bytes_array_t *data; 
} PB_System_PingRequest;

typedef struct _PB_System_PingResponse { 
    pb_bytes_array_t *data; 
} PB_System_PingResponse;

typedef struct _PB_System_RebootRequest { 
    PB_System_RebootRequest_RebootMode mode; 
} PB_System_RebootRequest;


/* Helper constants for enums */
#define _PB_System_RebootRequest_RebootMode_MIN PB_System_RebootRequest_RebootMode_OS
#define _PB_System_RebootRequest_RebootMode_MAX PB_System_RebootRequest_RebootMode_DFU
#define _PB_System_RebootRequest_RebootMode_ARRAYSIZE ((PB_System_RebootRequest_RebootMode)(PB_System_RebootRequest_RebootMode_DFU+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define PB_System_PingRequest_init_default       {NULL}
#define PB_System_PingResponse_init_default      {NULL}
#define PB_System_RebootRequest_init_default     {_PB_System_RebootRequest_RebootMode_MIN}
#define PB_System_DeviceInfoRequest_init_default {0}
#define PB_System_DeviceInfoResponse_init_default {NULL, NULL}
#define PB_System_FactoryResetRequest_init_default {0}
#define PB_System_PingRequest_init_zero          {NULL}
#define PB_System_PingResponse_init_zero         {NULL}
#define PB_System_RebootRequest_init_zero        {_PB_System_RebootRequest_RebootMode_MIN}
#define PB_System_DeviceInfoRequest_init_zero    {0}
#define PB_System_DeviceInfoResponse_init_zero   {NULL, NULL}
#define PB_System_FactoryResetRequest_init_zero  {0}

/* Field tags (for use in manual encoding/decoding) */
#define PB_System_DeviceInfoResponse_key_tag     1
#define PB_System_DeviceInfoResponse_value_tag   2
#define PB_System_PingRequest_data_tag           1
#define PB_System_PingResponse_data_tag          1
#define PB_System_RebootRequest_mode_tag         1

/* Struct field encoding specification for nanopb */
#define PB_System_PingRequest_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, BYTES,    data,              1)
#define PB_System_PingRequest_CALLBACK NULL
#define PB_System_PingRequest_DEFAULT NULL

#define PB_System_PingResponse_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, BYTES,    data,              1)
#define PB_System_PingResponse_CALLBACK NULL
#define PB_System_PingResponse_DEFAULT NULL

#define PB_System_RebootRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    mode,              1)
#define PB_System_RebootRequest_CALLBACK NULL
#define PB_System_RebootRequest_DEFAULT NULL

#define PB_System_DeviceInfoRequest_FIELDLIST(X, a) \

#define PB_System_DeviceInfoRequest_CALLBACK NULL
#define PB_System_DeviceInfoRequest_DEFAULT NULL

#define PB_System_DeviceInfoResponse_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, STRING,   key,               1) \
X(a, POINTER,  SINGULAR, STRING,   value,             2)
#define PB_System_DeviceInfoResponse_CALLBACK NULL
#define PB_System_DeviceInfoResponse_DEFAULT NULL

#define PB_System_FactoryResetRequest_FIELDLIST(X, a) \

#define PB_System_FactoryResetRequest_CALLBACK NULL
#define PB_System_FactoryResetRequest_DEFAULT NULL

extern const pb_msgdesc_t PB_System_PingRequest_msg;
extern const pb_msgdesc_t PB_System_PingResponse_msg;
extern const pb_msgdesc_t PB_System_RebootRequest_msg;
extern const pb_msgdesc_t PB_System_DeviceInfoRequest_msg;
extern const pb_msgdesc_t PB_System_DeviceInfoResponse_msg;
extern const pb_msgdesc_t PB_System_FactoryResetRequest_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define PB_System_PingRequest_fields &PB_System_PingRequest_msg
#define PB_System_PingResponse_fields &PB_System_PingResponse_msg
#define PB_System_RebootRequest_fields &PB_System_RebootRequest_msg
#define PB_System_DeviceInfoRequest_fields &PB_System_DeviceInfoRequest_msg
#define PB_System_DeviceInfoResponse_fields &PB_System_DeviceInfoResponse_msg
#define PB_System_FactoryResetRequest_fields &PB_System_FactoryResetRequest_msg

/* Maximum encoded size of messages (where known) */
/* PB_System_PingRequest_size depends on runtime parameters */
/* PB_System_PingResponse_size depends on runtime parameters */
/* PB_System_DeviceInfoResponse_size depends on runtime parameters */
#define PB_System_DeviceInfoRequest_size         0
#define PB_System_FactoryResetRequest_size       0
#define PB_System_RebootRequest_size             2

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
