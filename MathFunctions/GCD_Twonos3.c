/* Write a program to find GCD of two numbers even if one is negative
 * A Better Implementation of GCD_Twonos.c */
#include <stdio.h>
int main(void) {
	int a, b, i, gcd;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	
	a = (a > 0) ? a : -a;
	b = (b > 0) ? b : -b;

	for (i = 1; i <= a && i <= b; ++i) {
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}

	printf("GCD of %d & %d is %d\n", a, b, gcd);
}
