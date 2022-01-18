/* Print a Histogram of lengths of words in its input.
 * Horizontal with stars */
#include <stdio.h>
int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			putchar('\n');
		else
			putchar('*');
	}
}
