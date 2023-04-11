#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
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
