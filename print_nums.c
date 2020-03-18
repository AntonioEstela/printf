#include "holberton.h"
/**
 * print_numd - function that print a integer o decimal.
 * @list: arguments to print
 * Return: number of elements printed
 */
int print_numd(va_list list)
{
	int i = va_arg(list, int);

	if (i < 0)
	{
		i = -i;
		_putchar('-');
	}
	_puts2(convert(i, 10));
	return (i);
}
/**
 * print_numo - function that print a octal number.
 * @list: arguments to print
 * Return: number of elements printed
 */
int print_numo(va_list list)
{
	int i = va_arg(list, int);

	_puts2(convert(i, 8));
	return (i);
}
/**
 * print_numx - function that print a Unsigned hexadecimal.
 * @list: arguments to print
 * Return: number of elements printed
 */
int print_numx(va_list list)
{
	int i = va_arg(list, int);

	if (i < 0)
	{
		i = -i;
		_putchar('-');
	}
	_puts2(convert(i, 16));
	return (i);
}
/**
 * print_numu - function that print a Unsigned integer.
 * @list: arguments to print
 * Return: number of elements printed
 */
int print_numu(va_list list)
{
	int i = va_arg(list, int);

	_puts2(convert(i, 10));
	return (i);
}
