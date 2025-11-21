#include <stdio.h>
#include "mutils.h"

int main(void) {
    char str[] = "Hello";
    my_strrev(str);
    printf("rev: %s\n", str);

    int32_t arr[] = {1, 5, -3, 10};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    printf("max = %d, min = %d\n",
           my_array_max(arr, n), my_array_min(arr, n));

    my_complex a = {1.0, 2.0};
    my_complex b = {3.0, -1.0};
    my_complex c = my_c_myl(a, b);
    printf("c = %f + %fi\n", c.r, c.i);

    return 0;
}
