# Libft - Your First Own Library<br>
This project is about coding a C library. It will contain a lot of general purpose functions your programs will rely upon.<br>

## Table of Contents<br>
- [Introduction](#introduction)<br>
- [Common Instructions](#common-instructions)<br>
- [Mandatory Part](#mandatory-part)<br>
- [Bonus Part](#bonus-part)<br>

## Introduction<br>
C programming can be very tedious when one doesn’t have access to the highly useful standard functions. This project is about understanding the way these functions work, implementing and learning to use them. You will create your own library. It will be helpful since you will use it in your next C school assignments.<br>
Take the time to expand your libft throughout the year. However, when working on a new project, don’t forget to ensure the functions used in your library are allowed in the project guidelines.<br>

## Common Instructions<br>
- Your project must be written in C.<br>
- Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.<br>
- Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non-functional and will receive a 0 during the evaluation.<br>
- All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.<br>
- If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags `-Wall`, `-Wextra`, and `-Werror`, use `cc`, and your Makefile must not relink.<br>
- Your Makefile must at least contain the rules `$(NAME)`, `all`, `clean`, `fclean`, and `re`.<br>
- To turn in bonuses to your project, you must include a rule `bonus` to your Makefile, which will add all the various headers, libraries or functions that are forbidden on the main part of the project. Bonuses must be in a different file `_bonus.{c/h}` if the subject does not specify anything else.<br>
- Submit your work to your assigned git repository. Only the work in the git repository will be graded.<br>

## Mandatory Part<br>
The mandatory part involves implementing a set of functions from the C standard library (`libc`). These functions will be prefixed with `ft_` (e.g., `strlen` becomes `ft_strlen`). You will also implement functions like `calloc` and `strdup` using dynamic memory allocation.<br>

### Part 1: Libc Functions<br>
Implement the following functions:<br>
- `isalpha`<br>
- `isdigit`<br>
- `isalnum`<br>
- `isascii`<br>
- `isprint`<br>
- `strlen`<br>
- `memset`<br>
- `bzero`<br>
- `memcpy`<br>
- `memmove`<br>
- `strlcpy`<br>
- `strlcat`<br>
- `toupper`<br>
- `tolower`<br>
- `strchr`<br>
- `strrchr`<br>
- `strncmp`<br>
- `memchr`<br>
- `memcmp`<br>
- `strnstr`<br>
- `atoi`<br>

### Part 2: Additional Functions<br>
- `ft_substr`<br>
- `ft_strjoin`<br>
- `ft_strtrim`<br>
- `ft_split`<br>
- `ft_itoa`<br>
- `ft_strmapi`<br>
- `ft_striteri`<br>
- `ft_putchar_fd`<br>
- `ft_putstr_fd`<br>
- `ft_putendl_fd`<br>
- `ft_putnbr_fd`<br>

## Bonus Part<br>
The bonus part will be assessed only if the mandatory part is perfect. It involves working with linked lists and adding functions to manipulate them.<br>
Implement the following functions for your list implementation:<br>
- `ft_lstnew`<br>
- `ft_lstadd_front`<br>
- `ft_lstsize`<br>
- `ft_lstlast`<br>
- `ft_lstadd_back`<br>
- `ft_lstdelone`<br>
- `ft_lstclear`<br>
- `ft_lstiter`<br>
- `ft_lstmap`<br>
