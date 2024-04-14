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

char* find(char *begin, char *end, int ch) {
    while (begin != end && *begin != ch)
        begin++;
    return begin;
}

char* findNonSpace(char *begin) {
    while (*begin != '\0' && isspace(*begin)) {
        begin++;
    }
    return begin;
}

char* findSpace(char *begin) {
    while (*begin != '\0' && !isspace(*begin)) {
        begin++;
    }
    return begin;
}

char* findNonSpaceReverse(char *rbegin, const char *rend) {
    while (rbegin != rend && isspace(*(rbegin - 1))) {
        rbegin--;
    }
    return rbegin;
}

char* findSpaceReverse(char *rbegin, const char *rend) {
    while (rbegin != rend && !isspace(*(rbegin - 1))) {
        rbegin--;
    }
    return rbegin;
}

#endif