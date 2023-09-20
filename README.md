# _printf

This is a customization of the C function printf from the Standard Input and Out put header (stdio.h). This customization is meant to work similarly to the original printf function. It has to simply print the input string, and format the string in the presence of format specifiers where it replaces the format specifier with its actual value provided as an argument.

### Argument handling
The function accepts a variable number of arguments with the help of variadic functions capabilities.
- The function parses the format string to identify specifiers.
- For each specifier, the function expects an argument of the corresponding type.
- The number of arguments the function has to process is determined by the number of format specifiers.
- The arguments are passed sfter the string

### Matching Format specifiers with arguments
The function looks for '%' within the format string and interprets the character that follows to identify the data type of the argument.
For example when it encounters %d, the expected data type of the argument is int.


## Standard funtions used in this project
 write, va_list, va_start, va_end, va_arg

## using a local buffer of 1024
