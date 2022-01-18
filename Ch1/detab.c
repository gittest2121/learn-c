/* Write a program detab that replaces tabs in the input with proper number of blanks
 * to space to the next stop. Assume a fixed set of tab stops, say every n columns. Should
 * n be a variable or symbolic constant? */
#include <stdio.h>
#define TAB 8
int main(void) {
	int c, count, space;
	count = space = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			space = (TAB - (count % TAB));
			while (space > 0) {
				putchar(' ');
				++count;
				--space;
			}
		}
		else {
			putchar(c);
			++count;
		}
		if (c == '\n') {
			count = 0;
		}
	}
}
