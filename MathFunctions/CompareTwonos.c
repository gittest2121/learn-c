/* Write a program to compare two numbers
 * Writing a function compare for understanding (It can still be optimized)  */
#include <stdio.h>
#include <ctype.h>
int compare(int x, int y);
int main(void) {
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("%d is greater\n", compare(a,b));
}

/* There is something wrong before, if I use isdigit from ctype, either it gives out
 * Segmentation fault or asks for input again */

int compare(int x, int y) {
	int z = (x > y) ? x : y;
	return z;
}
