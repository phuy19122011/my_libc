# mini libc project

A small  library written from scratch in C.

This project is created for learning purposes to understand how basic C string functions work internally without relying on the standard library.

The goal is to improve my understanding of:

* C pointers
* Memory manipulation
* String handling
* Low-level programming concepts
* Library design



## Example

```c
#include "fakestring.h"

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
