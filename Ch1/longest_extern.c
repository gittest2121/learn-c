/* Write a program that outputs longest line from given input
 * Use external variables */
#include <stdio.h>
#define MAX 1000

int max;
char line[MAX];
char longest[MAX];

int get_line(void);
void copy(void);

/* print longest input line: specialized version */
int main(void) {
	int len;
	extern int max;
	max = 0;	/* Cannot initialize and declare at same time for extern variables */
	extern char longest[];

	while ((len = get_line()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0)
		printf("Longest Line: %s", longest);
}

/* get_line: specialized version */
int get_line(void) {
	int c, i;
	extern char line[];

	for (i = 0; i < MAX-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	else {
		while ((c = getchar()) != EOF && c != '\n')
			++i;
		if (c == '\n') {
			line[i] = c;
			++i;
		}
	}
	line[i] = '\0';
	return i;
}

/* copy: specialized version */
void copy(void) {
	int i = 0;
	extern char line[], longest[];
	while ((longest[i] = line[i]) != '\0' )
		++i;
}
