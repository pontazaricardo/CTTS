#include <stdint.h>
#include <stddef.h>
#include "test_function.h"

int array_comparison(const uint8_t *a, const uint8_t *b, size_t len) {
    uint8_t r = 0U;
    for (size_t i = 0U; i < len; i++) {
        r |= (uint8_t)(a[i] ^ b[i]);
    }
    return (int)(((uint64_t)0U - (uint64_t)r) >> 63U);
}