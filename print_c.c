#include "main.h"
/**
 * printf_char - prints a char
 * @val: argument
 * Return: 1
 */
int printf_char(val, int){
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
