#ifndef INC_STRING__H
#define INC_STRING__H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

size_t strlen_(const char *begin) {
    char *end = begin;
    while (*end != '\0')
        end++;
    return end - begin;
}

#endif