#include <stdio.h>
#include "main.h"

/**
 * main - this prints the name of the program
 * @argc: is  number of arguments
 * @argv: is  array of arguments
 *
 * Return: 0 is Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
