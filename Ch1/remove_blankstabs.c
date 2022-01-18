/* Write a program to remove trailing blanks and tabs
 * from each line of input, and to delete entirely
 * blank lines.
 * Credits: K&R C
 */

#include <stdio.h>

/* We are getting pieces of lines of arbitary length
 * without the need of getting the full line at once */
#define MAX 1000
int get_line(char s[], int lim);

int main(void) {
	int i, j, k, len;
	char line[MAX];

	while ((len = get_line(line, MAX)) > 0) {
		/* There are two kinds of pieces of lines, whether they
		 * are at the end of the line or not */

		if (line[len - 1] != '\n')	// if not an end of line
			printf("%s", line);	// print as it is
		else {				// if end of line
			j = 0;

			/* Count the number of spaces or tabs at the end */
			while ((line[len - 2 - j] == ' ') || (line[len - 2 -j] == '\t'))
				++j;

			/* Write the input without the unwanted characters */
			if (j < len - 1)
				for (k = 0; k < (len - 1 - j); ++k)
					printf("%c", line[k]);
			printf("\n");				// This is to recover the right
								// format at the end of the line
		}
	}
}

/* get_line: read a line into s, "even if length of line > MAX"; return length */
int get_line(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (i == '\n') {
		s[i] = c;
		++i;
	}
	else {
		while ((c = getchar()) != EOF && c != '\n')
			++i;	
		if (i == '\n') {
			s[i] = c;
			++i;
		}
	}
	s[i] = '\0';
	return i;
}
