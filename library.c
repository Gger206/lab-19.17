#include "string/string.h"
#include <assert.h>

void testStrlen() {
    const char *str = "Hello, World!";
    const char *str2 = "";
    size_t length1 = strlen_(str);
    size_t length2 = strlen_(str2);
    assert(length1 == 13 && length2 == 0);
}

void testFind() {
    char str[] = "Hello, World!";
    char *found = find(str, str + 13, 'W');
    char *found2 = find(str, str + 13, ',');
    assert(*found == 'W' && *found2 == ',');
}

void testFindNonSpace() {
    char str[] = "   Hello, World!  ";
    char str2[] = "A        W";
    char *nonSpace = findNonSpace(str);
    char *nonSpace2 = findNonSpace(str2);
    assert(*nonSpace == 'H' && *nonSpace2 == 'A');
}

void testFindSpace() {
    char str[] = "Hello, World!";
    char str2[] = "H e l l o, W o r l d !";
    char *space = findSpace(str);
    char *space2 = findSpace(str2);
    assert(*space == ' ' && *space2 == ' ');
}

void testFindNonSpaceReverse() {
    char str[] = "   Hello, World!  ";
    char str2[] = "Hello, World!   ";
    char *rend = str - 1;
    char *rend2 = str2 - 1;
    char *rbegin = findNonSpaceReverse(str + 15, rend);
    char *rbegin2 = findNonSpaceReverse(str2 + 10, rend2);
    assert(*rbegin == '!' && *rbegin2 == 'l');
}

int main() {
    testStrlen();
    testFind();
    testFindNonSpace();
    testFindSpace();
    testFindNonSpaceReverse();

    return 0;

}