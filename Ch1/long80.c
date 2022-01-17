/* Write a program to print all input lines that are longer than 80 characters */
/* Pseudocode:
 * 	Take input
 * 	Check for Number of characters in a line (use a function)
 * 	Check for lines more than 80 characters 
 * 		& Copy them (use a function)
 * 	print lines with more than 80 characters
 */
#include <stdio.h>
#define MAX 1000
#define MIN 80
int get_line(char line[], int max);
void copy(char to[], char from[]);

int main(void) {
	int len;
	char line[MAX], line80[MAX];

	/* copy when length is more than 80 characters */
	while ((len = get_line(line, MAX)) > 0)
		if (len > MIN) {
			copy(line80, line);
			printf("\nLine with more than 80 characters: \n");
			printf("%s", line80);
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

/* copy: copy a line 'from' into 'to' ; assume 'to' is big enough */
void copy(char to[], char from[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
