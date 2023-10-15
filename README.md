# Custom printf Implementation in C

This is a custom implementation of the `printf` function in C that handles various specifiers. The function is designed to handle the following format specifiers:

- **`%c`**: For printing a char passed as an argument.
- **`%s`**: For printing a string passed as an argument.
- **`%%`**: For printing the '%' character to stdout.
- **`%d`**: For printing a decimal digit.
- **`%i`**: For printing a signed integer.
- **`%b`**: Converts and prints the given integer in binary.
- **`%u`**: For printing an unsigned integer.
- **`%o`**: Converts and prints the given integer in octal.
- **`%x`**: Converts and prints the given integer in hexadecimal using lowercase letters.
- **`%X`**: Converts and prints the given integer in hexadecimal using uppercase letters.
- **`%S`**: Formats the printing of a string in a specific way.

## Specifications

- The implementation uses a buffer of 1024 characters for performance and memory efficiency.

## How to Use

To use this custom `printf` function, include the appropriate header file and call the function as follows:

```c
#include "main.h"

int main() {
    char ch = 'A';
    char *str = "Hello, World!";
    int num = 42;
    
    custom_printf("Char: %c\n", ch);
    custom_printf("String: %s\n", str);
    custom_printf("Decimal: %d\n", num);
    custom_printf("Binary: %b\n", num);
    custom_printf("Hexadecimal (lowercase): %x\n", num);
    custom_printf("Hexadecimal (uppercase): %X\n", num);

    return 0;
}

