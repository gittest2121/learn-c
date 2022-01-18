/* Write a program to copy its input to its output, replacing each string
 * of one or more blanks by a single blank
 */
#include <stdio.h>
int main(void) {
	int c, prevspace = 0;
	// Initially, we consider prevspace = somevalue, 
	// then check EOF condition for c,
	// check blank in c;
	// (LOOP):
	// 	check blank in prevspace;
	// 		if no blank; putchar(c)
	// if no blank in c;
	// 	putchar(c);
	// prevspace = c
	// We're ignoring when prevspace is blank

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (!prevspace) {
				prevspace = 1;
				putchar(c);
			}
		}
		else {
			prevspace = 0;
			putchar(c);
		}
	}
}	
