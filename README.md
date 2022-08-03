![ft_printf logo](https://game.42sp.org.br/static/assets/achievements/ft_printfe.png)

# FT_PRINTF
##### *succeeded with 100%*
This project aims to mimic the original printf() from *<stdio.h>* header from C standard library.

### Mandatory goal
The function must display on the screen a chain of characters (string), identify any format specifier(s) and replace by its respective format, and return the total number of characters printed on the screen.  Since the number of inputs from the user is unknown, *ft_printf* must be a variadic function.

### Specifiers
A format specifier is identified by an escape sign **%** followed by a character. This character tells what type of data structure must take place in the string. For this project the following specifiers were implemented:
 
- %**%** must be replaced by a % sign.
- %**c** must be replaced by a character type.
- %**s** must be replaced by a string (an array of characters).
- %**p** must be replaced by a pointer.
- %**d** must be replaced by an integer number.
- %**i** must also be replaced by an integer number
- %**u** must be replaced by by an unsigned integer.
- %**x** must be replaced by a lowercase hexadecimal number. 
- %**X** must be replaced by a uppercase hexadecimal number.

### Makefile and use

In order to compile the ft_printf library, one must type `make` one the root folder and include the `libftprintf.a` alongside `main.c` compilation. 

```bash
>> make
>> gcc libftprintf.a main.c
>> ./a.out
```

You must also include `#include "libftprintf.a"` on the `main.c` header

### Testing
Besides its own test developed, two other testers were used in this project:
1. Paulo Santana's **ft_printf_tester** found [here](https://github.com/paulo-santana/ft_printf_tester)
2. Tripouille's **printfTester** [here](https://github.com/Tripouille/printfTester)
