# _printf()

The printf project was the first big hard project in Holberton School.

This project is based on creating a function in C that imitates the traditional printf, using limited functions and adapting to [C coding style for Holberton School.](https://github.com/holbertonschool/Betty/wiki)


## Prototype of _printf()

  `int _printf(const char *format, ...)`

# Format
| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| s  | String of characters  |
| d  | Signed decimal integer |
| i  | Signed decimal integer |
| o  | Signed octal  |
| u  | Unsigned integer  |
| x  | Unsigned hexadecimal  |
| X  | Unsigned hexadecimal (uppercase)  |
| %  | Character  |
# How to compile this project?
`$ gcc -Wall -Werror -Wextra -pedantic *.c`
## Example of how to use the _printf() function
``` [C]
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    _printf("Unknown:[%r]\n");
    return (0);
}
 ```
### And the output will be:
```[C]
Length:[39, 39]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
String:[I am a string !]
Address:[0x7ffe637541f0]
Percent:[%]
Len:[12]
Unknown:[%r]
```
# Authors
This is a project collaboration between [Antonio Estela](https://twitter.com/Antonio__Estela) and [Víctor Paz](https://twitter.com/VictorP1312) Currently Software Engineering students at Holberton School (Cohort 11)

![Holberton Logo](https://www.holbertonschool.com/holberton-logo.png)