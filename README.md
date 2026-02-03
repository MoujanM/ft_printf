*This project has been created as part of the 42 curriculum by mmirdama.*

# ft_printf

## Description

ft_printf is a reimplementation of the standard C library function `printf()`. The goal of this project is to understand variadic functions, develop a deep understanding of formatted output, and learn how to handle different data types and format specifiers. This implementation supports the most commonly used conversion specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, and `%X`, along with the literal `%%`.

The project demonstrates fundamental concepts in C programming including string manipulation, number base conversion, memory management, and the use of variadic arguments (`va_list`). The implementation mimics the behavior of the original `printf()` function, including its return value (the total number of characters printed).

## Instructions

### Compilation

To compile the project, use the provided Makefile:

```bash
make
```

This will generate a `libftprintf.a` static library, as well as `libft.a` some of whose functions are reused in implementing ft_printf. 

To compile programme with these libraries, use:

```bash
cc -your-program.c libftprintf.a 
```

### Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "world");
    ft_printf("Number: %d, Hex: %x\n", 42, 42);
    ft_printf("Pointer: %p\n", &main);
    return (0);
}
```
## Features

### Supported Format Specifiers

- `%c` - Print a single character
- `%s` - Print a string
- `%p` - Print a pointer address in hexadecimal format
- `%d` - Print a decimal (base 10) number
- `%i` - Print an integer in base 10
- `%u` - Print an unsigned decimal number
- `%x` - Print a number in hexadecimal (lowercase)
- `%X` - Print a number in hexadecimal (uppercase)
- `%%` - Print a literal percent sign

### Edge Cases Handled

- NULL string pointers (prints "(null)")
- NULL pointers (prints "(nil)")
- Zero values
- Maximum and minimum integer values (INT_MAX, INT_MIN)
- Maximum unsigned integer values (UINT_MAX)
- Empty strings
- Null character (`\0`)

## Algorithm and Data Structure Explanation

The core of this implementation uses a **function dispatch table** (also known as a jump table) to handle different format specifiers efficiently. This design pattern was chosen for several key reasons:

**Structure Definition:**
```c
typedef struct s_specifier
{
    char        spec;
    t_handler   function;
}   t_specifier;
```

The table maps each format specifier character to its corresponding handler function:
```c
static const t_specifier specs_table[] = {
    {'c', &handle_c},
    {'d', &handle_d},
    {'i', &handle_d},
    {'s', &handle_s},
    // ... etc
    {0, NULL}
};
```
**Advantages of this approach:**

1. **Extensibility**: Adding new format specifiers only requires adding a new entry to the table and implementing the handler function. No changes to the parsing logic are needed.

2. **Maintainability**: Each specifier's logic is isolated in its own function, making the code easier to understand, test, and debug.

3. **Performance**: While a linear search is used (O(n) where n is the number of specifiers), the table is small (8-9 entries), making this negligible. The function pointer approach avoids a large if-else or switch statement.

4. **Separation of Concerns**: The parsing logic is completely separated from the formatting logic. `ft_parse_specifier()` handles dispatch, while handler functions focus solely on their specific conversion.

### Variadic Function Architecture

The implementation uses a direct variadic function approach:

**`ft_printf()`**: Serves as both the public interface and the parser. It validates input, initializes the `va_list`, iterates through the format string, and dispatches to appropriate handler functions based on format specifiers. This unified design ensures proper `va_list` management and avoids potential undefined behavior from passing variadic arguments between functions. (A bug in a previous attempt that is fixed in this retry.)

The function uses a lookup table (`t_specifier` array) to map format specifiers to their handler functions, providing clean separation between parsing logic and type-specific formatting.

### Base Conversion Algorithm

For hexadecimal (`%x`, `%X`), unsigned (`%u`), and pointer (`%p`) conversions, a recursive base conversion algorithm is used:

```c
int ft_print_base(unsigned long long num, char *base)
{
    int base_value;
    int count;

    base_value = ft_strlen(base);
    count = 0;
    if (num >= (unsigned long long)base_value)
        count += ft_print_base(num / base_value, base);
    count += write(1, &base[num % base_value], 1);
    return (count);
}
```
### String and Character Handling

Simple, direct implementations are used for `%c` and `%s`:
- Characters are printed directly using `write(1, &c, 1)`
- Strings are printed character-by-character to maintain consistency with the character count return value
- NULL checks are performed at the handler level, not in the core printing functions

### Signed Integer Conversion

For `%d` and `%i`, the implementation leverages the existing `ft_itoa()` function from libft:
- Handles negative numbers correctly (including INT_MIN edge case)
- Returns a dynamically allocated string that's then printed and freed
- Reuses well-tested library code rather than reimplementing number-to-string conversion

## Resources

### Documentation and References

- [GNU C Library - Formatted Output](https://www.gnu.org/software/libc/manual/html_node/Formatted-Output.html) - Official documentation for printf family functions
- [cppreference.com - printf](https://en.cppreference.com/w/c/io/fprintf) - Comprehensive reference for printf format specifiers
- [Variadic Functions in C](https://en.cppreference.com/w/c/variadic) - Documentation on va_list, va_start, va_arg, and va_end
- [Function Dispatch Tables in C](https://blog.alicegoldfuss.com/function-dispatch-tables/) - detailed overview of logic and implementation of dispatch tables
- [Understanding ft_printf](https://www.youtube.com/watch?v=Hb2m7htiKWM) - overview of important concepts for implementing printf

### AI Usage

1. **Conceptual Understanding and Roadmap**: Understanding variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`), how `printf()` works behind the scenes, implementing the lookup table pattern for specifier handlers, and establishing the chronology of steps (parse → identify → dispatch → format → output).

2. **Code Review and Bug Detection**: Identified a critical architecture issue where the original two-function design (`ft_printf()` calling `parse_helper()` with `...`) created undefined behavior. The variadic arguments were not being properly passed between functions, which was caught by AddressSanitizer (`-fsanitize=address`) during Moulinette testing. Refactored to a single-function design that properly manages the `va_list` throughout its lifetime. Also helped clarify when `va_copy` is needed (not required for this implementation).

3. **Edge Case Analysis**: Helped identify and verify edge cases that needed testing (NULL pointers, INT_MIN/INT_MAX, empty strings, etc.).

4. **Documentation Generation**: Assisted in creating this README file with expansive and detailed description of function specifics. 


