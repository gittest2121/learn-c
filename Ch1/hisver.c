/* Print a Vertical Histogram of lengths of words from its input 
 * Not the program I was thinking of */
#include <stdio.h>
#define MAX_LENGTH 20
#define MAX_WORDS 25
int main(void) {
	int word[MAX_WORDS];
	int i, c, j, wordlength, wordno;
	for (i = 0; i < MAX_WORDS; ++i)
		word[i] = 0;

	wordlength = wordno = 0;
	while ((c = getchar()) != EOF) {
		++wordlength;
		if (c == ' ' || c == '\n' || c == '\t') {
			word[wordno] = wordlength - 1;
			++wordno;
			wordlength = 0;
		}
	}

	for (i = MAX_LENGTH; i >= 1; --i) {
		for (j = 0; j <= MAX_WORDS; ++j) {
			if (i <= word[j])
				putchar('*');
			else
				putchar(' ');
		}
		putchar('\n');
	}
}

