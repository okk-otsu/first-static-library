#include "mutils.h"
#include <limits.h>

int32_t my_array_max(const int32_t *arr, size_t n) {
    if (!arr || n == 0) return INT32_MIN;

    int32_t max = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int32_t my_array_min(const int32_t *arr, size_t n) {
    if (!arr || n == 0) return INT32_MAX;

    int32_t min = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}
