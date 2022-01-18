/* Print a Histogram of lengths of words in its input.
 * Horizontal */
#include <stdio.h>
int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			putchar('\n');
		else
			putchar(c);
	}
}
/* This program is also efficient way for wordline.c (Show words from input on each line) */
