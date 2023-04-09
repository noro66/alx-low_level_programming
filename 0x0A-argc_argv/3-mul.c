#include <stdio.h>
#include <strlib.h>
/**
* main - prints  number of arguments,
* @argc: int.
* @argv: int.
* Return: 0 (Success).
*/

int main(int argc, char const *argv[])

{
	sum = 0;
	if (argc == 3)
	{
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
