/* Write a program to compare three numbers */
#include <stdio.h>
int main(void) {
	double a, b, c;

	printf("Enter three numbers :");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a > b) {
		if (a > c)
			printf("%.2f is the largest number\n", a);
		else
			printf("%.2f is the largest number\n", c);
	}
	else {
		if (a < b)
			printf("%.2f is the largest number\n", b);
		else
			printf("%.2f is the largest number\n", a);
	}
}
