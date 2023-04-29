#include "main.h"


/**
 * print_sign - prints the sign of a given number
 *
 * @n: the number to check
 *
 * Return: 1 if the number is positive, -1 if the number is negative, 0
 */
	int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}

