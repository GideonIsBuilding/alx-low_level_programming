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
	printf("%d\n", argc - 1);
	return 0;
}
