#include <stdio.h>
#include <stdlib.h>

/**
*main-prints the minimum number of coins to make change .
*@argc: int.
*@argv: char*.
*Return : 0 (Success) ,(non-zero-fail).
*/

int main(int argc, char const *argv[])
{
	int i, lcents = 0;
	int money = atoi(argv[1]);
	int cents [] = { 25, 10, 5, 2, 1 };

	if (argc == 2)
	{
	for (i = 0; i < 5; i++)
	{
	if (money >= cents[i])
	{
	lcents += money / cents[i];
	money %= cents[i];
	if (money % cents[i] == 0)
	{
	break;
	}
	}
	}
	printf("%d\n", lcents);
	}
	return (0);
}
