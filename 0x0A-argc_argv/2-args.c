#include <stdio.h>

/**
* main - print all argument of program
* @argc: is parameters number
* @argv: is array that contains parameters
* Return: 0 if preogram is good
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
