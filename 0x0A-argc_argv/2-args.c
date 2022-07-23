#include <stdio.h>

/**
 * main -> this function prints the number for arguments
 * @argc: arg parameter
 * @argv: an array where command is listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

