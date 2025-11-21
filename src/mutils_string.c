#include "mutils.h"

size_t my_strlen(const char *s) {
    size_t len = 0;
    while (s && s[len] != '\0') {
        len++;
    }
    return len;
}

void my_strrev(char *s) {
    if (!s) return;
    size_t len = my_strlen(s);
    if (len == 0) return;

    size_t i = 0, j = len - 1;
    while (i < j) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
}
