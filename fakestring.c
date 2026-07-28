#include "fakestring.h"
#include <stddef.h>

int my_strlen(const char *str){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}
char* my_strrev(char* str){
    int len = my_strlen(str);
    int left = 0;
    int right = len - 1;
    while(left < right){
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    return str;
}
char* my_strcpy(char* dest, const char* src){
    char* og_dest = dest;
    while((*dest++ = *src++) != '\0'){
        
    }
    return og_dest;
}
char* my_strchr(const char* str,int c){
    while(*str != '\0'){
        if(*str == (char)c){
            return (char*)str;
        }
        str++;
    }
    if((char)c == '\0'){
        return (char*)str;
    }
    return nullptr;
}
char* my_strcat(char* dest, const char* src){
    char* ptr = dest;
    while(*ptr != '\0'){
        ptr++;
    }
    while((*ptr++ = *src++) != '\0'){
    }
    return dest;
}
int my_strcmp(const char *str1, const char *str2){
    while(*str1 != '\0' && (*str1 == *str2)){
        str1++;
        str2++;
    }
    return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}