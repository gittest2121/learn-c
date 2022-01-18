/* Write a program with function power(a,b), such that it gives output a^b */
#include <stdio.h>
int power(int m, int n);

int main(void) {
	int i;
	printf("i\t|\tPower of 2\t|\tPower of 3\t|\n");
	printf("--------------------------------------------------------|\n");
	for (i = 0; i < 10; ++i)
		printf("%d\t|\t%d\t\t|\t%d\t\t|\n", i, power(2, i), power(3, i));
}

/* Function power(a,b) */
int power(int base, int n) {
	int i, p = 1;
	for (i = 1; i <= n; ++i)
		p *= base;
	return p;
}
