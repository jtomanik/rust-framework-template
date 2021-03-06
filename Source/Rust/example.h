// Adapted from https://github.com/wojteklu/rust-to-ios

#pragma once
#include <stdint.h>
#include <stddef.h>

struct ByteSlice {
    const uint8_t *bytes;
    size_t length;
};

struct message;

struct message *message_new(const char *text);
void message_destroy(struct message *message);
struct ByteSlice message_get_text(const struct message *message);
