/* Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time. */

#include <stdio.h>
#define LEN 1000
int reverse(char str[], int size);

int main(void) {
	char line[LEN];
	int len;

	printf("\n    START OF THE PROGRAM      \n");

	while (reverse(line, LEN) > 0)
		continue;
	printf("\n      END OF THE PROGRAM      \n");
}

int reverse(char s[], int size) {
	char rev[size];
	int i, r, c, len;
	for (i = 0; i < size-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	len = i;
	s[i] = '\0';

	for (i = 0; i < len; ++i)
		rev[len - i - 1] = s[i];

	rev[i] = '\0';

	printf("%s\n", rev);
	return len;
}
