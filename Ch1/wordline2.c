/* Write a program that prints its input one word per line */
#include <stdio.h>
#define IN 1
#define OUT 0
int main(void) {
	int c, prevc, state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state = IN) {
				state = OUT;
				if (prevc == ' ' || prevc == '\t')
					;
				else
					putchar('\n');
			}
		}
		else {
		       	if (state == OUT) {
			state = IN;
			}
		putchar(c);
		}
	prevc = c;
	}
}