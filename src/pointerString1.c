// Using pointer to store string
#include <stdio.h>

int main(void)
{
	// pointer variable to store string
	char *strPtr = "Hello";

	// temporary pointer variable
	char *t = strPtr;
	
	// print the string
	while(*t != '\0')
	{

		printf("%c\n", *t);
	// move the t pointer to the next memory location		
	    t++;
	}

	return 0;
}
