/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: nacos_grpc_service.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "nacos_grpc_service.pb-c.h"

void metadata__headers_entry__init
        (Metadata__HeadersEntry *message) {
    static const Metadata__HeadersEntry init_value = METADATA__HEADERS_ENTRY__INIT;
    *message = init_value;
}

void metadata__init
        (Metadata *message) {
    static const Metadata init_value = METADATA__INIT;
    *message = init_value;
}

size_t metadata__get_packed_size
        (const Metadata *message) {
    assert(message->base.descriptor == &metadata__descriptor);
    return protobuf_c_message_get_packed_size((const ProtobufCMessage *) (message));
}

size_t metadata__pack
        (const Metadata *message,
         uint8_t *out) {
    assert(message->base.descriptor == &metadata__descriptor);
    return protobuf_c_message_pack((const ProtobufCMessage *) message, out);
}

size_t metadata__pack_to_buffer
        (const Metadata *message,
         ProtobufCBuffer *buffer) {
    assert(message->base.descriptor == &metadata__descriptor);
    return protobuf_c_message_pack_to_buffer((const ProtobufCMessage *) message, buffer);
}

Metadata *
metadata__unpack
        (ProtobufCAllocator *allocator,
         size_t len,
         const uint8_t *data) {
    return (Metadata *)
            protobuf_c_message_unpack(&metadata__descriptor,
                                      allocator, len, data);
}

void metadata__free_unpacked
        (Metadata *message,
         ProtobufCAllocator *allocator) {
    if (!message)
        return;
    assert(message->base.descriptor == &metadata__descriptor);
    protobuf_c_message_free_unpacked((ProtobufCMessage *) message, allocator);
}

void payload__init
        (Payload *message) {
    static const Payload init_value = PAYLOAD__INIT;
    *message = init_value;
}

size_t payload__get_packed_size
        (const Payload *message) {
    assert(message->base.descriptor == &payload__descriptor);
    return protobuf_c_message_get_packed_size((const ProtobufCMessage *) (message));
}

size_t payload__pack
        (const Payload *message,
         uint8_t *out) {
    assert(message->base.descriptor == &payload__descriptor);
    return protobuf_c_message_pack((const ProtobufCMessage *) message, out);
}

size_t payload__pack_to_buffer
        (const Payload *message,
         ProtobufCBuffer *buffer) {
    assert(message->base.descriptor == &payload__descriptor);
    return protobuf_c_message_pack_to_buffer((const ProtobufCMessage *) message, buffer);
}

Payload *
payload__unpack
        (ProtobufCAllocator *allocator,
         size_t len,
         const uint8_t *data) {
    return (Payload *)
            protobuf_c_message_unpack(&payload__descriptor,
                                      allocator, len, data);
}

void payload__free_unpacked
        (Payload *message,
         ProtobufCAllocator *allocator) {
    if (!message)
        return;
    assert(message->base.descriptor == &payload__descriptor);
    protobuf_c_message_free_unpacked((ProtobufCMessage *) message, allocator);
}

static const ProtobufCFieldDescriptor metadata__headers_entry__field_descriptors[2] =
        {
                {
                        "key",
                        1,
                        PROTOBUF_C_LABEL_NONE,
                        PROTOBUF_C_TYPE_STRING,
                        0,   /* quantifier_offset */
                        offsetof(Metadata__HeadersEntry, key),
                        NULL,
                        &protobuf_c_empty_string,
                        0,             /* flags */
                        0, NULL, NULL    /* reserved1,reserved2, etc */
                },
                {
                        "value",
                        2,
                        PROTOBUF_C_LABEL_NONE,
                        PROTOBUF_C_TYPE_STRING,
                        0,   /* quantifier_offset */
                        offsetof(Metadata__HeadersEntry, value),
                        NULL,
                        &protobuf_c_empty_string,
                        0,             /* flags */
                        0, NULL, NULL    /* reserved1,reserved2, etc */
                },
        };
static const unsigned metadata__headers_entry__field_indices_by_name[] = {
        0,   /* field[0] = key */
        1,   /* field[1] = value */
};
static const ProtobufCIntRange metadata__headers_entry__number_ranges[1 + 1] =
        {
                {1, 0},
                {0, 2}
        };
const ProtobufCMessageDescriptor metadata__headers_entry__descriptor =
        {
                PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
                "Metadata.HeadersEntry",
                "HeadersEntry",
                "Metadata__HeadersEntry",
                "",
                sizeof(Metadata__HeadersEntry),
                2,
                metadata__headers_entry__field_descriptors,
                metadata__headers_entry__field_indices_by_name,
                1, metadata__headers_entry__number_ranges,
                (ProtobufCMessageInit) metadata__headers_entry__init,
                NULL, NULL, NULL    /* reserved[123] */
        };
static const ProtobufCFieldDescriptor metadata__field_descriptors[3] =
        {
                {
                        "type",
                        3,
                        PROTOBUF_C_LABEL_NONE,
                        PROTOBUF_C_TYPE_STRING,
                        0,   /* quantifier_offset */
                        offsetof(Metadata, type),
                        NULL,
                        &protobuf_c_empty_string,
                        0,             /* flags */
                        0, NULL, NULL    /* reserved1,reserved2, etc */
                },
                {
                        "headers",
                        7,
                        PROTOBUF_C_LABEL_REPEATED,
                        PROTOBUF_C_TYPE_MESSAGE,
                        offsetof(Metadata, n_headers),
                        offsetof(Metadata, headers),
                        &metadata__headers_entry__descriptor,
                        NULL,
                        0,             /* flags */
                        0, NULL, NULL    /* reserved1,reserved2, etc */
                },
                {
                        "clientIp",
                        8,
                        PROTOBUF_C_LABEL_NONE,
                        PROTOBUF_C_TYPE_STRING,
                        0,   /* quantifier_offset */
                        offsetof(Metadata, clientip),
                        NULL,
                        &protobuf_c_empty_string,
                        0,             /* flags */
                        0, NULL, NULL    /* reserved1,reserved2, etc */
                },
        };
static const unsigned metadata__field_indices_by_name[] = {
        2,   /* field[2] = clientIp */
        1,   /* field[1] = headers */
        0,   /* field[0] = type */
};
static const ProtobufCIntRange metadata__number_ranges[2 + 1] =
        {
                {3, 0},
                {7, 1},
                {0, 3}
        };
const ProtobufCMessageDescriptor metadata__descriptor =
        {
                PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
                "Metadata",
                "Metadata",
                "Metadata",
                "",
                sizeof(Metadata),
                3,
                metadata__field_descriptors,
                metadata__field_indices_by_name,
                2, metadata__number_ranges,
                (ProtobufCMessageInit) metadata__init,
                NULL, NULL, NULL    /* reserved[123] */
        };
static const ProtobufCFieldDescriptor payload__field_descriptors[2] =
        {
                {
                        "metadata",
                        2,
                        PROTOBUF_C_LABEL_NONE,
                        PROTOBUF_C_TYPE_MESSAGE,
                        0,   /* quantifier_offset */
                        offsetof(Payload, metadata),
                        &metadata__descriptor,
                        NULL,
                        0,             /* flags */
                        0, NULL, NULL    /* reserved1,reserved2, etc */
                },
                {
                        "body",
                        3,
                        PROTOBUF_C_LABEL_NONE,
                        PROTOBUF_C_TYPE_MESSAGE,
                        0,   /* quantifier_offset */
                        offsetof(Payload, body),
                        &google__protobuf__any__descriptor,
                        NULL,
                        0,             /* flags */
                        0, NULL, NULL    /* reserved1,reserved2, etc */
                },
        };
static const unsigned payload__field_indices_by_name[] = {
        1,   /* field[1] = body */
        0,   /* field[0] = metadata */
};
static const ProtobufCIntRange payload__number_ranges[1 + 1] =
        {
                {2, 0},
                {0, 2}
        };
const ProtobufCMessageDescriptor payload__descriptor =
        {
                PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
                "Payload",
                "Payload",
                "Payload",
                "",
                sizeof(Payload),
                2,
                payload__field_descriptors,
                payload__field_indices_by_name,
                1, payload__number_ranges,
                (ProtobufCMessageInit) payload__init,
                NULL, NULL, NULL    /* reserved[123] */
        };


