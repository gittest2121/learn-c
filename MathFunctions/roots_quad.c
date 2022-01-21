/* Write a program to find the roots of a quadratic equation */
#include <math.h>
#include <stdio.h>
int main(void) {
	double a, b, c, disc, root1, root2, real, img;
	printf("Enter coefficients a, b & c: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	disc = b*b - 4*a*c;

	// condition for real and different roots
	if (disc > 0) {
		root1 = (-b + sqrt(disc))/(2*a);
		root2 = (-b - sqrt(disc))/(2*a);
		printf("Roots are %.2lf and %.2lf\n", root1, root2);
	}

	// condition for real and equal roots
	else if (disc == 0) {
		root1 = root2 = -b/(2*a);
		printf("Roots are equal and are %.2lf\n", root1);
	}

	// condition for imaginary roots
	else {
		real = -b/(2*a);
		img = sqrt(-disc)/(4*a);
		printf("Roots are %.2lf+%.2lfi and %.2lf-%.2lfi\n", real, img, real, img);
	}
}

