#include<stdio.h>
#include"main.h"
/**
 * main - print the num of arguments to the program
 * @argc: no. of arguments
 * @argv: array of argumets
 *
 * return: 0=success
 */
int main(int argc, char *argv[])
{
	(void)argv;/*ignore argv*/
	printf("%d/n", argc - 1);

	return (0);
}
