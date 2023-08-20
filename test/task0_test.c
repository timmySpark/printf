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
	len1 = _printf("%s\n", "");
	len2 =  printf("%s\n", "");
	printf("Printf Length: %d | _printf Length: %d\n", len2, len1);
	len1 = _printf("%s\n", "123 ABC \t ^%");
	len2 =  printf("%s\n", "123 ABC \t ^%");
	printf("Printf Length: %d | _printf Length: %d\n", len2, len1);
	len1 = _printf("%s", NULL);
	printf("_printf length: %d\n", len1);
	_printf(NULL);

	/* Print a Character */
	len1 = _printf("Character: %c\n", 7);
	len2 =  printf("Character: %c\n", 7);
	printf("Printf Length: %d | _printf Length: %d\n", len2, len1);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	/* Print Percentage (%) */

	len1 = _printf("Percentage: [%%]\n");
	len2 =  printf("Percentage: [%%]\n");
	printf("Printf Length: %d | _printf Length: %d\n", len2, len1);

	/* Print Unknown Specifier *
	len1 = _printf("Unknown:[%z]\n", 67);
	len2 =  printf("Unknown:[%z]\n", 67);
	printf("Printf Length: %d | _printf Length: %d\n", len2, len1);*/

	/* Print Multiple Specifiers */
	len1 = _printf("Character: %c, String: %s\n", 'A', "Hello");
	len2 =  printf("Character: %c, String: %s\n", 'A', "Hello");
	printf("Printf Length: %d | _printf Length: %d\n", len2, len1);
	

	return (0);
}
