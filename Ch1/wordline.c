/* Write a program that prints its input one word per line 
 * OUTDATED PROGRAM */
#include <stdio.h>
#define IN 1
#define OUT 0
int main(void) {
	int c, state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state = IN) {
				state = OUT;
				putchar('\n');
			}
		}
		else {
		       	if (state == OUT) {
			state = IN;
			}
		putchar(c);
		}
	}
}
