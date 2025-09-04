# libft

## Overview

**libft** is a project from 42 School that aims to recreate a set of standard C library functions from scratch. This project is essential for learning C fundamentals, understanding memory management, and practicing code modularity.

Currently, this version includes only the mandatory functions. Bonus functions will be added later.

## Contents

This library includes:

- **Character checks and conversions**
  - `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
  - `ft_toupper`, `ft_tolower`

- **String manipulation**
  - `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
  - `ft_strdup`

- **Memory management**
  - `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
  - `ft_calloc`

- **Conversion**
  - `ft_atoi`

- **File descriptor output**
  - `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## Installation

Clone the repository and compile the library:

```bash
git clone https://github.com/HenriqueReis/libft
cd libft
make
