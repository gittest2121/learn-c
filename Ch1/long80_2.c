/* Write a program to print all input lines that are longer than 80 characters */
/* Pseudocode:
 * 	Take input
 * 	Check for Number of characters in a line (use a function)
 * 	Check for lines more than 80 characters & print them.
 */
#include <stdio.h>
#define MAX 1000
#define MIN 80
int get_line(char line[], int max);

int main(void) {
	int len;
	char line[MAX];

	/* copy when length is more than 80 characters */
	while ((len = get_line(line, MAX)) > 0)
		if (len > MIN) {
			printf("\nLine with more than 80 characters: \n");
			printf("%s", line);
		}
}

/* get_line: read a line into s, "even if length of line > MAX"; return length */                
int get_line(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	else {
		while ((c = getchar()) != EOF && c != '\n')
			++i;
		if (c == '\n') {
			s[i] = c;
			++i;
		}
	}
	s[i] = '\0';
	return i;
}
