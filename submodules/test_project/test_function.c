#include <stdint.h>
#include <stddef.h>
#include "test_function.h"

uint8_t array_comparison(const uint8_t *a, const uint8_t *b, size_t len) {
    uint8_t r = 0U;
    for (size_t i = 0U; i < len; i++) {
        r |= (uint8_t)(a[i] ^ b[i]);
    }
    return (uint8_t)(((uint64_t)0U - (uint64_t)r) >> 63U);
}