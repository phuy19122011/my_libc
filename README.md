# Fake String Library

A small string library written from scratch in C.

This project is created for learning purposes to understand how basic C string functions work internally without relying on the standard library.

The goal is to improve my understanding of:

* C pointers
* Memory manipulation
* String handling
* Low-level programming concepts
* Library design

## Current Features

Implemented functions:

| Function      | Description                              |
| ------------- | ---------------------------------------- |
| `my_strlen()` | Calculate the length of a string         |
| `my_strrev()` | Reverse a string                         |
| `my_strcpy()` | Copy a string                            |
| `my_strchr()` | Find the first occurrence of a character |
| `my_strcat()` | Concatenate two strings                  |
| `my_strcmp()` | Compare two strings                      |

## Example

```c
#include "fake_string.h"

int main()
{
    char buffer[32];

    my_strcpy(buffer, "Hello");
    my_strcat(buffer, " World");

    return 0;
}
```



## Future Plans

More functions will be added over time:

* `my_strcmp`
* `my_strncmp`
* `my_strncpy`
* `my_strstr`
* Memory functions:

  * `my_memcpy`
  * `my_memset`
  * `my_memcmp`

The long-term goal is to build a small custom C library for learning low-level programming and operating system development.

## Motivation

This project is part of my journey learning C and low-level programming.

Instead of only using existing libraries, I want to understand how they work internally by rebuilding simple versions from scratch.

## License

no License yet.
