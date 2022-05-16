#ifndef MAIN
#define MAIN

#include <stdarg.h>
<<<<<<< HEAD

<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
=======
/**
  * struct specifiers - Struct specifiers
  * @specifier: The conversion specifier
  * @f: The function pointer
  */
typedef struct specifiers
>>>>>>> 0966cd4e722e614964ec675f345b74953bf671f8
{
	char *specifier;
	int (*f)(va_list args);
} spc_dt;

<<<<<<< HEAD
int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
=======
int _write(char c);
=======
int _putchar(char c);
>>>>>>> a251f8ec9a5558c32e9bfc2c463a83a94733ac2c
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_rev(va_list r);
int print_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_rot13(va_list R);

<<<<<<< HEAD
#endif /* Group Work Main */
>>>>>>> 0966cd4e722e614964ec675f345b74953bf671f8
=======

typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif /* please */
>>>>>>> a251f8ec9a5558c32e9bfc2c463a83a94733ac2c
