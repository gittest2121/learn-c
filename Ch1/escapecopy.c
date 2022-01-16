/* Write a program to copy its input to its output, replacing each
 * tab by \t, each backspace by \b and each backslash by \\. This makes tabs
 * and backspaces visible in an unambiguous (clear) way. */
#include <stdio.h>
int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		switch (c) {
			case '\t':
				putchar('\\'); putchar('t'); break;
			case '\b':
				putchar('\\'); putchar('b'); break;
			case '\\':
				putchar('\\'); putchar('\\'); break;
			default:
				putchar(c);
		}
	}
}
