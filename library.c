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

int main() {
    testStrlen();
    testFind();

    return 0;

}