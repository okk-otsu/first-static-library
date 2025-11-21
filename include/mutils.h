#ifndef MUTILS_H
#define MUTILS_H

#include <stddef.h>
#include <stdint.h>

/* ===== Строки ===== */

size_t my_strlen(const char *s);
void   my_strrev(char *s);           // разворот строки "in-place"

/* ===== Массивы ===== */

int32_t my_array_max(const int32_t *arr, size_t n);
int32_t my_array_min(const int32_t *arr, size_t n);

/* ===== Комплексные числа ===== */

typedef struct {
    double r;
    double i;
} my_complex;

my_complex my_c_add(my_complex a, my_complex b);
my_complex my_c_myl(my_complex a, my_complex b);

#endif // MUTILS_H