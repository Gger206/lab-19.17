#include "string/string.h"
#include <assert.h>

void testStrlen() {
    const char *str = "Hello, World!";
    const char *str2 = "";
    size_t length1 = strlen_(str);
    size_t length2 = strlen_(str2);
    assert(length1 == 13 && length2 == 0);
}

void testFind(){
    char str[] = "find test";
    char *found = find(str, str + 9, 'e');
    assert(*found == 'e');
}

int main() {
    testStrlen();
    testFind();

return 0;

}