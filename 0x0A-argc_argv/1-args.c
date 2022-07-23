#include <stdio.h>

/**
 * main -> function that prints number of arguments
 * @argc: arg paramater
 * @argv: an array of the command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
