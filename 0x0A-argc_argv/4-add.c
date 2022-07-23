#include <stdio.h>
#include <stdlib.h>

/**
 * main -> this function adds two numbers
 * @argc: arg parameter
 * @argv: an array which command is listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result, num, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
