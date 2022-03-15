#include "main.h"

/**
* _islower - return 0 if arg is not lower else it return 1,
* follwed by a new line
*/
int _islower(int caracter)
{
	if (caracter >= 97 && caracter <= 122)
		return (1);
	else
		return (0);
} 
