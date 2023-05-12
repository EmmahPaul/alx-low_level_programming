#include <stdio.h>
#include "main.h"

/**
 * main - this prints all arguments it receives
 * @argc: the  number of arguments
 * @argv: the  array of arguments
 *
 * Return: Always 0 is Success
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}
