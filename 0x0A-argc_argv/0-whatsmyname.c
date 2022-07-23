#include <stdio.h>

/**
 * main -> this function prints its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
}
