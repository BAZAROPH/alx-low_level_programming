#include <stdio.h>

/**
* swap_int - swaps the values of two integers.
* @a: is number one
* @b: is number 2
*/
void swap_int(int *a, int *b)
{
	int inter = *a;
	*a = *b;
	*b = inter;
}
