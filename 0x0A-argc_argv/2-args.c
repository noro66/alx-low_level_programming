#include <stdio.h>

/**
* main - prints the number of arguments passed into the program
* @argc: int.
* @argv: int.
* Return: 0 (Success).
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
