#ifndef MY_STRING_H
#define MY_STRING_H

#include <stddef.h>

int my_strlen(const char *str);
char* my_strrev(char* str);
char* my_strcpy(char* dest, const char* src);
char* my_strchr(const char* str,int c);
char* my_strcat(char* dest, const char* src);
int my_strcmp(const char *str1, const char *str2);
char* my_strncpy(char* dest, const char* src, size_t n);
char* my_strncat(char* dest, const char* src, size_t n);
#endif