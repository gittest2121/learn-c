/* Write a program to count number of lines from input */
#include <stdio.h>
int main(void) {
	int lineno = 0, c;
	c == getchar();
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++lineno;
	printf("No. of lines: %d", lineno);
}
