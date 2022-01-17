/* Write a program to find GCD of two numbers even if one is negative
 * A Better Implementation of GCD_Twonos.c 
 * using functions & recursion. */
#include <stdio.h>
int gcd(int,int);
int main(void) {
	int a, b;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	
	a = (a > 0) ? a : -a;
	b = (b > 0) ? b : -b;

	printf("GCD of %d & %d is %d\n", a, b, gcd(a,b));
}

int gcd(int a,int b) {
	if (b != 0)
		return gcd(b, a % b);
	else
		return a;
}
