#include "mutils.h"

my_complex my_c_add(my_complex a, my_complex b) {
    my_complex res = { a.r + b.r, a.i + b.i };
    return res;
}

my_complex my_c_myl(my_complex a, my_complex b) {
    my_complex res = {
        a.r * b.r - a.i * b.i,
        a.r * b.i + a.i * b.r
    };
    return res;
}
