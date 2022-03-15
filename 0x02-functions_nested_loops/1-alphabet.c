#include "main.h"

/*
print_alphabet prints the alphabet, in lowercase, followed by a new line
*/
void print_alphabet(void)
{
	char begin = 97;
    	while (begin<=122)
    	{
        	_putchar(begin);
    		begin++;
	}
	_putchar('\n');
}
