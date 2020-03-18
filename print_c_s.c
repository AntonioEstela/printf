#include "holberton.h"
/**
 * print_c - function that print a single character.
 * @list: arguments to print
 * Return: number of elements printed
 */
int print_c(va_list list)
{
	char s = va_arg(list, int);
	int i = 0;

	/*  i = write(1, &s, 1); */
	_putchar(s + i);
	return (1);
}
/**
 * print_s - function that print a string.
 * @list: arguments to print
 * Return: number of elements printed
 */
int print_s(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0;

	if (str == '\0')
	{
		str = '\0';
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
