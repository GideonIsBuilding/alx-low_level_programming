#include <stdio.h>

/**
 * main - prints the program's name followed by a new line
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: (0) Success 
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
