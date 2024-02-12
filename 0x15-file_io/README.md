# C - File I/O

This directory deals with topics related to the files and its manipulations. How files are created, edited, and updated in C.

## Learning Objectives
1. Understanding File descriptors
2. Understanding system calls, Kernel routine, library calls
3. Performing operation with files like create, close, open, read, write, append and the like.

## How to run
1. Clone the directory
2. `cd` to the this directory
3. create your own main file to perform some test
4. use `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <main_file> <desired_file_to_test> -o <output_name>`
5. `./<output_name>`

### Limitations
* The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
* Allowed syscalls: `read`, `write`, `open`, `close`
* You are allowed to use `_putchar`, a user version of `putchar`

## Others
Do well to like this repository if the code has been of help.
