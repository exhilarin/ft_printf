# 🖨️ ft_printf

![42 Project](https://img.shields.io/badge/42%20Network-ft__printf-blue?style=for-the-badge)
![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge)

## 📚 Project Summary

**ft_printf** is one of the fundamental projects in the 42 curriculum. It involves re-creating the standard C `printf` function, supporting formatted output for characters, strings, integers, unsigned numbers, hexadecimal values, and pointers — all without using any standard output functions other than `write`.

This project is a deep dive into variadic functions, memory management, base conversions, and formatted string processing. It builds a strong understanding of how output formatting works internally, and how to structure a complex, modular C program.

---

## 🧠 What I Learned in ft_printf

The project offers a great opportunity to explore and solidify knowledge of core C concepts:

### 🔹 Variadic Functions (`stdarg.h`)
- Accessing variable number of arguments with `va_list`, `va_start`, `va_arg`, `va_end`
- Designing flexible functions like `ft_printf(const char *format, ...)`

### 🔹 Format String Parsing
- Parsing and interpreting format specifiers: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, and `%%`
- Handling edge cases like `NULL` strings or special formatting conditions

### 🔹 Integer and Base Conversions
- Converting integers to strings using manual base logic
- Working with both signed and unsigned integers, including hexadecimal and pointer values

### 🔹 Output Management
- Printing to stdout using only the `write` system call
- Tracking the number of printed characters manually to return correct value like real `printf`

### 🔹 Modular and Clean Code Design
- Organizing code into small, testable functions like:
  - `ft_putnbr`, `ft_putstr`, `ft_putchar`, `ft_puthex`, `ft_putptr`, etc.
- Using helper utilities for string length, digit count, and base conversion

### 🔹 Norminette Compliance
- Following 42’s strict style guide for clean and readable code

### 🔹 Testing & Debugging
- Creating your own test suite to compare behavior with the original `printf`
- Verifying corner cases like zero-padding, NULL values, and negative numbers

---

## 📁 Project Structure

```bash
ft_printf/
├── ft_printf.c        # Main ft_printf function
├── ft_utils.c         # Helper functions (putchar, putstr, strlen, etc.)
├── ft_format.c        # Format handlers and dispatcher
├── ft_numbers.c       # Integer to string conversions
├── ft_hex.c           # Hexadecimal and pointer printing
├── ft_printf.h        # Header file
├── Makefile           # Build automation
└── README.md          # Project documentation
