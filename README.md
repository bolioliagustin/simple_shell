# Simple shell project :shell:

A simple command-line interpreter developed as an end of trimester project at Holberton School.

<h2>Description: :thought_balloon:</h2>

Simple shell reads simple commands from standard input or from a file and executes them.

**Compilation**:

To invoke simple_shell, you must compile all the *.c files in the repository and run the resulting executable:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`
`./hsh`

The function is variadic, therefore, it takes any number of arguments after the format pointer.

- Printing a basic string: `_printf("Why, sometimes I've believed as many as 6 impossible things before %s.", "breakfast");`
  - Output: *Why, sometimes I've believed as many as 6 impossible things before breakfast.*

- Printing integers: `_printf("Why, sometimes I've believed as many as %d impossible things before breakfast.", 6");`
  - Output: *Why, sometimes I've believed as many as 6 impossible things before breakfast.*

<h3>Specifiers :crossed_flags:</h3>

Specifier characters at the end define the type and the interpretation of its corresponding argument:

| Specifier  | Output          | Examples |
|------------|-----------------|----------|
| `c`        | character       | x        |
| `s`        | string          | hello    |
| `d` or `i` | Signed integer  | 7, -7    |
| `R`        | Rot translation | qPbqr    |

<h2>Functions and Files: :card_file_box:</h2>

| **Name**     | **Description**          |
|--------------|--------------------------|
| `holberton.h`  | header file              |
| `_printf.c`    | main function            |
| `_string_print.c` | custom function to print a string |
| `_num_print.c` | custom functions to print integers |
| `_rot13.c`    | custom function to print a rot13'ed string |
| `_putchar.c` | prints single characters |
| `man_3_printf` | man page |


<h1>Notes :books:</h1>
This function does not handle flag characters, field width, precision nor length modifiers.
<br>
<br>
<h1>Authors :writing_hand:</h1>

:angel: [Alina de los Santos](https://github.com/alina-delossantos) :angel: and :smiling_imp:[Andres Ortiz](https://github.com/Aortiz91) :smiling_imp:

