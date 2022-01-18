/* Write a program to count the characters from input */
#include <stdio.h>
int main(void) {
	int countno;
	for (countno = 0; getchar() != EOF; ++countno)
		;
	printf("\nNo. of Characters: %d\n", countno);
}
