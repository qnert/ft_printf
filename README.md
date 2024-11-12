# ft_printf - Custom C Implementation of printf

The `ft_printf` project involves creating a simplified, custom implementation of the standard `printf` function in C. This library is designed to reproduce some of the core functionalities of `printf`, allowing for formatted output that closely mirrors the behavior of the original C library function. This project is part of the **42 School** curriculum.

## Project Overview

This repository includes the implementation of `ft_printf`, a C function that mimics the behavior of the standard `printf`, with the following key features and limitations:

- **Function Name:** `ft_printf`
- **Prototype:** `int ft_printf(const char *, ...);`
- **Supported Conversions:** 
  - `%c`: Prints a single character.
  - `%s`: Prints a string.
  - `%p`: Prints a pointer address in hexadecimal.
  - `%d`: Prints a decimal (base 10) number.
  - `%i`: Prints an integer in base 10.
  - `%u`: Prints an unsigned decimal (base 10) number.
  - `%x`: Prints a hexadecimal number in lowercase.
  - `%X`: Prints a hexadecimal number in uppercase.
  - `%%`: Prints a percent sign.

## Common Instructions

- **Coding Standards:** The project is implemented in C according to the 42 School’s Norm, which enforces strict formatting, structure, and error-handling conventions.
- **Error Handling:** Functions must avoid unexpected exits due to segmentation faults, double frees, and other common memory errors (excluding undefined behavior).
- **Memory Management:** All allocated memory must be properly freed, and memory leaks are not tolerated.
- **Makefile Requirements:** 
  - The project includes a `Makefile` with targets: `all`, `clean`, `fclean`, `re`, and `bonus`.
  - Compilation flags are set to `-Wall -Wextra -Werror`, and the compiler used is `cc`.

## Implementation Details

1. **Library Creation:** The `ft_printf` library, `libftprintf.a`, is created using the `ar` command (use of `libtool` is prohibited).
2. **Project Structure:** All files are located at the root level, and no unused files are included.
3. **Bonus Part:** Additional features may be implemented in bonus files, following 42’s guidelines (e.g., naming files `_bonus.c`).

## External Functions Used

- The implementation is allowed to use: `malloc`, `free`, `write`, and the variadic argument functions (`va_start`, `va_arg`, `va_copy`, `va_end`).
