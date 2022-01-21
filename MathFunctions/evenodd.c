/* Write a program to check if a number is even or odd */
#include <stdio.h>
int checkeven(int no);
int main(void) {
	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);
	// scanf has some issues
	// since it even considers alphabets 
	// & symbols as garbage numbers
	checkeven(num);
}

int checkeven(int no) {
	double c;
	if (no % 2 == 0) 
		c = printf("%d is an even number\n", no);
	else
		c = printf("%d is an odd number\n", no);
	return c;
}
