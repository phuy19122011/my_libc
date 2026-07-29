#include <stdio.h>
#include <assert.h>
#include "my_string.h"

void test_strlen(void) {
    assert(my_strlen("") == 0);
    assert(my_strlen("a") == 1);
    assert(my_strlen("Hello") == 5);
    assert(my_strlen("Hello World") == 11);
}

void test_strrev(void) {
    char str1[] = "hello";
    char str2[] = "abcd";
    char str3[] = "a";
    char str4[] = "";

    assert(my_strcmp(my_strrev(str1), "olleh") == 0);
    assert(my_strcmp(my_strrev(str2), "dcba") == 0);
    assert(my_strcmp(my_strrev(str3), "a") == 0);
    assert(my_strcmp(my_strrev(str4), "") == 0);
}

void test_strcpy(void) {
    char dest[100];

    my_strcpy(dest, "hello");
    assert(my_strcmp(dest, "hello") == 0);

    my_strcpy(dest, "");
    assert(my_strcmp(dest, "") == 0);

    my_strcpy(dest, "C Programming");
    assert(my_strcmp(dest, "C Programming") == 0);
}

void test_strchr(void) {
    char str[] = "hello";

    assert(my_strchr(str, 'h') == &str[0]);
    assert(my_strchr(str, 'e') == &str[1]);
    assert(my_strchr(str, 'o') == &str[4]);
    assert(my_strchr(str, '\0') == &str[5]);
    assert(my_strchr(str, 'x') == NULL);
}

void test_strcat(void) {
    char dest[100] = "Hello";

    my_strcat(dest, " World");
    assert(my_strcmp(dest, "Hello World") == 0);

    my_strcat(dest, "");
    assert(my_strcmp(dest, "Hello World") == 0);

    char dest2[100] = "";
    my_strcat(dest2, "ABC");
    assert(my_strcmp(dest2, "ABC") == 0);
}

void test_strcmp(void) {
    assert(my_strcmp("abc", "abc") == 0);

    assert(my_strcmp("abc", "abd") < 0);
    assert(my_strcmp("abd", "abc") > 0);

    assert(my_strcmp("", "") == 0);
    assert(my_strcmp("", "a") < 0);
    assert(my_strcmp("a", "") > 0);

    assert(my_strcmp("abc", "abcd") < 0);
    assert(my_strcmp("abcd", "abc") > 0);
}

void test_strncpy(void) {
    char dest[100];

    my_strncpy(dest, "hello", 3);
    dest[3] = '\0';
    assert(my_strcmp(dest, "hel") == 0);

    my_strncpy(dest, "hi", 5);
    assert(dest[0] == 'h');
    assert(dest[1] == 'i');
    assert(dest[2] == '\0');
    assert(dest[3] == '\0');
    assert(dest[4] == '\0');

    my_strncpy(dest, "", 3);
    assert(dest[0] == '\0');
    assert(dest[1] == '\0');
    assert(dest[2] == '\0');
}

void test_strncat(void) {
    char dest1[100] = "Hello";

    my_strncat(dest1, " World", 3);
    assert(my_strcmp(dest1, "Hello Wo") == 0);

    char dest2[100] = "ABC";
    my_strncat(dest2, "DEF", 10);
    assert(my_strcmp(dest2, "ABCDEF") == 0);

    char dest3[100] = "";
    my_strncat(dest3, "Hello", 2);
    assert(my_strcmp(dest3, "He") == 0);

    char dest4[100] = "Test";
    my_strncat(dest4, "", 5);
    assert(my_strcmp(dest4, "Test") == 0);

    char dest5[100] = "ABC";
    my_strncat(dest5, "XYZ", 0);
    assert(my_strcmp(dest5, "ABC") == 0);
}

int main(void) {
    test_strlen();
    test_strrev();
    test_strcpy();
    test_strchr();
    test_strcat();
    test_strcmp();
    test_strncpy();
    test_strncat();

    printf("=================================\n");
    printf(" All tests passed successfully!\n");
    printf("=================================\n");

    return 0;
}