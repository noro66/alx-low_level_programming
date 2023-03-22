#include "main.h"
/**
* print_sign - function to check for sign of number
*
* @c: is the int that will use for the argument of the function
*
* Return: 0
*/
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
