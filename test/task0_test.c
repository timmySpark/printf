#include "main.h"
#include <stdio.h>

/**
 * main - test file for printf functions
 *
 * Return: Always 0.
 */

int main(void)
{
	int len1, len2;

	/* Print Strings */

	len1 = _printf("Hello %s!\n", "World");
	len2 =  printf("Hello %s!\n", "World");
	printf("Printf Length: %d | _printf Length: %d\n", len2, len1);

	/* Print a Character */

	len1 = _printf("Character: %c\n", 'A');
	len2 =  printf("Character: %c\n", 'A');
	printf("Printf Length: %d | _printf Length: %d\n", len2, len1);

	/* Print Percentage (%) */

	len1 = _printf("Percentage: %%\n");
	len2 =  printf("Percentage: %%\n");
	printf("Printf Length: %d | _printf Length: %d\n", len2, len1);

	return (0);
}