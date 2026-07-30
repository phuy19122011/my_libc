#include "my_string.h"
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
char* my_strncpy(char* dest, const char* src, size_t n){
    size_t i;
    for(i = 0; i < n && src[i] != '\0' ; i++){
        dest[i] = src[i];
    }
    for(;i < n; i++){
        dest[i] = '\0';
    }
    return dest;
}
char* my_strncat(char* dest, const char* src, size_t n){
    char* ptr = dest;
    while(*ptr != '\0'){
        ptr++;
    }
    size_t i = 0;
    while(i < n && src[i] != '\0'){
        *ptr = src[i];
        ptr++;
        i++;
    }
    *ptr = '\0';
    return dest;
}
int my_strncmp(const char* str1,const char* str2,size_t n){
    while(n > 0 && *str1 != '\0' && (*str1 == *str2)){
        str1++;
        str2++;
        n--;
    }
    if(n == 0){
        return 0;
    }
    return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}