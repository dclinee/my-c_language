/* Accessing string via pointer */
#include <stdio.h>

int main(void)
{
	// string variable
	char str[6] = "Hello";

	// pointer variable
	char *ptr = str;

	// print the string
	while(*ptr != '\0')
	{
		printf("%c\n", *ptr);
		// move the ptr pointer to the next memory location
		ptr++;
	}
	return 0;
}
