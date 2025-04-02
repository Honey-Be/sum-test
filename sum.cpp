#include <stdint.h>

const uint64_t ONE = 1;
const uint64_t DIV2 = ~(1 << 63);

#include "sum.h"

uint64_t sum(uint64_t &&n) {
    uint64_t is_odd = n & ONE;
    uint64_t q = (n >> 1) & DIV2;
    if(is_odd == ONE) {
        return (q+1) * n;
    } else {
        return q*(n+1);
    }
}