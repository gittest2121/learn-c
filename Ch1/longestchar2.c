#include <stdio.h>
#define MAX_LENGTH 1000
int get_line(char line[], int max_len);
void copy(char to[], char from[]);

int main(void) {
	int len, maxlen = 0;
	char line[MAX_LENGTH], longest[MAX_LENGTH];

	/* copy when length is more than max length */
	while ((len = get_line(line, MAX_LENGTH)) > 0)
		if (len > maxlen) {
			maxlen = len;
			copy(longest, line);
		}

	if (maxlen > 0) /* if there is any line, print it */
		printf("Longest: %s", longest);
}

/* get_line: read a line into s, "even if length of line > MAX_LENGTH"; return length */
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
