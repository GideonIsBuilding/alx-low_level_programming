#include <stdio.h>

/*
 * main: prints number of arguments passed
 * followed by a new line
 * @argc: number of command line arguments
 * @argv: array contain the command line argenments in string 
 * Return: (0) Always
 */

int main (int argc, char* argv [] __attribute__ ((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return 0;
}
