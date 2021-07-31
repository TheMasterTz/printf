# project _printf 
![enter image description here](https://www.holbertonschool.com/holberton-logo.png)

`_printf` is a custom function of the C function named `printf`. Which works with the conversion specifiers which are `%i`, `%d`, `%c`, `%s` and `%%`.

 ## File Descriptions
-  **_printf.c:**  - contains the fucntion  `_printf`, which uses the prototype  `int _printf(const char *format, ...);`. The format string is composed of zero or more directives. See  `man 3 printf`  for more detail.  **_printf**  will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to  **stdout**, the standard output stream.
-  **struct.c:** contains the structure comparing the argument of the conversion specifier
-   **_putchar.c:** contains the function  `_putchar`, which writes a character to stdout.
-   **holberton.h:** contains all function prototypes used for  `_printf`.
-   **man_3_printf:** manual page for the custom  `_printf`  function.
## Project Requirements:
-   All files will be compiled on Ubuntu 14.04 LTS.
-   Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra y -pedantic.
-    The code must follow the style of [Betty](https://github.com/holbertonschool/Betty/wiki)
-   Global variables are not allowed
-   Funciones y macros autorizadas:
    -    `write` (man 2 writes)
    -   `malloc` (man 3 malloc)
    -   `free` (man 3 free)
    -   `va_start` (man 3 va_start)
    -   `va_end` (man 3 va_end)
    -   `va_copy` (man 3 va_copy)
    -   `va_arg` (man 3 va_arg)

# Installation Of The Function
**Download From a Browser:**
 1. To install the _printf function you must download this entire
    repository and go to where you designate `download or clone`.
    ![enter image description here](https://www.wikihow.com/images/thumb/1/1e/Download-a-GitHub-Folder-Step-3.jpg/v4-728px-Download-a-GitHub-Folder-Step-3.jpg.webp)
 
 2. Click the `Download ZIP button.` This action will download the
    repository to the computer as a `.zip` file.
    
![enter image description here](https://www.wikihow.com/images/thumb/2/21/Download-a-GitHub-Folder-Step-4.jpg/v4-728px-Download-a-GitHub-Folder-Step-4.jpg.webp)
---
**Download It From Your Donsole:**

 1. First go to your work directory and create the .git folder, with the
    following command:

    `$ git init`

 2. You can clone a repository with `git clone [url]`. For example, if
    you want to clone the Git library named libgit2 you can do something
    like this:

    ` $ git clone https://github.com/TheMasterTz/printf`
---
After downloading the repository with all the files you must include in your project the library `holberton.h`:

     #include "holberton.h"

Now you can use the _printf function here is an example of how you can use it:
 

    _printf("whole number: %d", 123);

## The conversion characters that the _printf function has:

| statement | description | caractère de conversion |
|--|--|--|
| _print("%d, %i", 123) | Conversion décimale signée d'un nombre entier | **%d, %i**
| _print("%c", 'H') | Imprime le caractère ASCII correspondant | **%c**
| _print("%s", "hi") | Character string (ending in '\0') | **%s**
----------------
authors:
[@TheMastertz](https://github.com/TheMasterTz) and [@sebasrengi](https://github.com/sebasrengi).
