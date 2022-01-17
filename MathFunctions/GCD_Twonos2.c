/* Write a program to find GCD of two numbers 
 * Using while loop */
#include <stdio.h>
int main(void) {
	int a, b;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	printf("GCD of two integers is: %d\n", a);
}
