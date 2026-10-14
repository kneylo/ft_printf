*This project has been created as part of the 42 curriculum by [nekreter](https://github.com/kneylo)*

# ft_printf

### [Description](#description) · [Content](#content) · [Instructions](#instructions) · [Resources](#resources) · [Testing](#testing)

## Description

This project is part of my cursus at 42 Lausanne. The goal is to recreate the standard `printf()` function from the C library, learning how variadic arguments work and how formatted output is handled in C.

The project is coded following the [42 Norm](https://github.com/42School/norminette).

The mandatory part consists of implementing a custom `ft_printf()` function that handles the following conversions:

- Characters
- Strings
- Pointers
- Signed integers
- Unsigned integers
- Hexadecimal numbers
- The percent sign

The function must print the formatted output to the standard output and return the number of characters printed.

For more information, refer to the `ft_printf` subject available on the 42 Intra.

## Content

I divided the project into 7 different files, each handling a specific part of the `ft_printf()` function.

| File | Description |
| --- | --- |
| `ft_printf.c` | Main function, format string parsing and conversion dispatching |
| `ft_printf.h` | Header file containing function prototypes, includes and hexadecimal bases |
| `print_c.c` | Prints a single character (`%c`) and the percent sign (`%%`) |
| `print_s.c` | Prints a string (`%s`) |
| `print_p.c` | Prints a pointer address (`%p`) |
| `print_di.c` | Prints signed integers (`%d` and `%i`) |
| `print_u.c` | Prints unsigned integers (`%u`) |
| `print_hex.c` | Prints hexadecimal numbers in lowercase (`%x`) and uppercase (`%X`) |

The supported conversion specifiers are:

| Specifier | Description | Example |
| --- | --- | --- |
| `%c` | Character | `A` |
| `%s` | String | `Hello, world!` |
| `%p` | Pointer address | `0x7ffee1234560` |
| `%d` | Signed decimal integer | `-42` |
| `%i` | Signed integer | `42` |
| `%u` | Unsigned decimal integer | `42` |
| `%x` | Lowercase hexadecimal | `2a` |
| `%X` | Uppercase hexadecimal | `2A` |
| `%%` | Percent sign | `%` |

## Instructions

If you want to use this `ft_printf`, you'll need to clone the repository and compile the library.

The Makefile can be used to compile everything and clean the generated files.

- `make` or `make all` — compile the source files and create `libftprintf.a`.
- `make clean` — remove all object files (`.o`).
- `make fclean` — remove object files and the compiled library.
- `make re` — clean everything and recompile the library.

Clone and compile the project:

```bash
git clone https://github.com/kneylo/ft_printf.git
cd ft_printf
make
```

Include the header in your code:

```c
#include "ft_printf.h"
```

Example of usage:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 42);
    ft_printf("Pointer: %p\n", (void *)main);
    return (0);
}
```

Compile your program by linking the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf
```

## Resources

My main sources of information are these links down below, AI was used to create this README:

- [42 Cursus GitBook](https://42-cursus.gitbook.io/42cursus/)
- [Learn C](https://www.learn-c.org/)
- [printf — Linux manual page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Variadic functions — GNU C Library](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [Stack Overflow](https://stackoverflow.com/)
- [Basic Markdown Syntax](https://www.markdownguide.org/basic-syntax/)

## Testing

To test this project, compare the output and return value of `ft_printf()` with those of the original `printf()` function.

Test each supported conversion individually and combine several conversions in the same format string.

Some useful test cases include:

- Characters and strings, including empty strings.
- Positive and negative integers.
- Zero and large unsigned integers.
- Lowercase and uppercase hexadecimal numbers.
- Pointer addresses, including `NULL`.
- Multiple conversions in the same call.
- The percent sign (`%%`).
- The return value, which should match the number of characters printed.

You can also use external testers for the 42 `ft_printf` project to check edge cases and compare the implementation against the original function.