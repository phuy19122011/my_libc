#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "my_string.h"

void test_my_strlen(void) {
    assert(my_strlen("") == 0);
    assert(my_strlen("a") == 1);
    assert(my_strlen("Hello, World!") == 13);
}

void test_my_strrev(void) {
    char str1[] = "";
    assert(strcmp(my_strrev(str1), "") == 0);

    char str2[] = "a";
    assert(strcmp(my_strrev(str2), "a") == 0);

    char str3[] = "hello";
    assert(strcmp(my_strrev(str3), "olleh") == 0);

    char str4[] = "123456";
    assert(strcmp(my_strrev(str4), "654321") == 0);
}

void test_my_strcpy(void) {
    char dest[50];
    
    assert(my_strcpy(dest, "") == dest);
    assert(strcmp(dest, "") == 0);

    assert(my_strcpy(dest, "Hello C") == dest);
    assert(strcmp(dest, "Hello C") == 0);
}

void test_my_strchr(void) {
    const char *str = "Hello, World!";

    assert(my_strchr(str, 'o') == str + 4);
    assert(my_strchr(str, 'H') == str);
    assert(my_strchr(str, '\0') == str + strlen(str));
    assert(my_strchr(str, 'z') == NULL);
}

void test_my_strcat(void) {
    char dest[50] = "Hello";

    assert(my_strcat(dest, " World") == dest);
    assert(strcmp(dest, "Hello World") == 0);

    assert(my_strcat(dest, "") == dest);
    assert(strcmp(dest, "Hello World") == 0);
}

void test_my_strcmp(void) {
    assert(my_strcmp("abc", "abc") == 0);
    assert(my_strcmp("abc", "abd") < 0);
    assert(my_strcmp("abd", "abc") > 0);
    assert(my_strcmp("abc", "abcd") < 0);
    assert(my_strcmp("abcd", "abc") > 0);
    assert(my_strcmp("", "") == 0);
}

void test_my_strncpy(void) {
    char dest[20];

    memset(dest, 'X', sizeof(dest));
    assert(my_strncpy(dest, "Hello World", 5) == dest);
    assert(memcmp(dest, "HelloXXXXX", 10) == 0);

    memset(dest, 'X', sizeof(dest));
    assert(my_strncpy(dest, "Hi", 5) == dest);
    assert(dest[0] == 'H' && dest[1] == 'i' && dest[2] == '\0' && dest[3] == '\0' && dest[4] == '\0');
}

void test_my_strncat(void) {
    char dest[20] = "Hello";

    assert(my_strncat(dest, ", World!", 3) == dest);
    assert(strcmp(dest, "Hello, W") == 0);

    assert(my_strncat(dest, "!!", 10) == dest);
    assert(strcmp(dest, "Hello, W!!") == 0);
}

void test_my_strncmp(void) {
    assert(my_strncmp("abcdef", "abcghi", 3) == 0);
    assert(my_strncmp("abcdef", "abcghi", 4) < 0);
    assert(my_strncmp("abcghi", "abcdef", 4) > 0);
    assert(my_strncmp("abc", "def", 0) == 0);
}

void test_my_strrchr(void) {
    const char *str = "Hello, World!";

    assert(my_strrchr(str, 'o') == str + 8);
    assert(my_strrchr(str, '!') == str + 12);
    assert(my_strrchr(str, '\0') == str + strlen(str));
    assert(my_strrchr(str, 'x') == NULL);
}

void test_my_strstr(void) {
    const char *haystack = "Hello, World!";

    assert(my_strstr(haystack, "World") == haystack + 7);
    assert(my_strstr(haystack, "Hello") == haystack);
    assert(my_strstr(haystack, "Bye") == NULL);
    assert(my_strstr(haystack, "") == haystack);
}

int main(void) {
    test_my_strlen();
    test_my_strrev();
    test_my_strcpy();
    test_my_strchr();
    test_my_strcat();
    test_my_strcmp();
    test_my_strncpy();
    test_my_strncat();
    test_my_strncmp();
    test_my_strrchr();
    test_my_strstr();

    printf("ALL TESTS PASSED!\n");
    return 0;
}