#include "holberton.h"
/**
 * convert - function that conver numers into char.
 * @num: number to convert.
 * @base: base of the number to convert.
 * Return: the value of ptr.
 */
char *convert(unsigned int num, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
