#include <stdio.h>
#include <stdlib.h>

/**
*main - print sum of 2 numbers.
*@argc: number of command line argument.
*@argv: pointer to an array of command line arguments.
*Return: 0(Sucess), non-zero(fail).
*/

int main(int argc, char *argv[])
{
	int sume;

	if (argc == 3)
	{
		sume = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sume);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
