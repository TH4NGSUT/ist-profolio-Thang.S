#include <stdio.h>

int main()
{
	printf("this is my c basics program\n");
	int num;	// type name;
	printf("Enter a Number: ");		// prompt user for a number
	
	scanf("%i", &num);	// store user input in num
	
	printf("You entered %i", num);
	return 0;
}

