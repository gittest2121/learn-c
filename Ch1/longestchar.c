/* Write a program that reads a set of text files and prints the longest
 * Credits: K&R C
 * Pseudocode:
 * 	while (there's another line)
 * 		if (it's longer than the previous longest)
 * 			save it
 * 			save its length
 * 	print longest line
 *
 * Functions:
 * 	get_line - Read a line & return its length
 * 		- Zero as EOF because it is never a valid line length
 * 	copy	- Copy a new line to a longest line
 */
#include <stdio.h>
#define MAX_LENGTH 1000

int get_line(char line[], int maxlen);
void copy(char to[], char from[]);
int main(void) {
	int len, max = 0; /* current line length & maximum length seen so far */
	char line[MAX_LENGTH], longest[MAX_LENGTH]; /* current input line & longest line saved */
	
	while ((len = get_line(line, MAX_LENGTH)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0) /* if there exists a line in input */
		printf("Longest: %s", longest);
}

/* get_line: read a line into s, provided if less than MAX_LENGTH & return length */
int get_line(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	/* If loop includes '\n', then it doesn't stop at newline character
	 * which makes Longest Line = input.
	 * This is the reason we explicitly described newline character */
	s[i] = '\0';

	/* getline puts the character '\0' (the null character, whose value is zero)
	 * at the end of the array it is creating, to mark the end of the string of
	 * characters. This convention is also used by the C language:
	 * When a string constant like "hello\n" appears in a C Program, it is stored
	 * as an array of characters containing the characters of the string and
	 * terminated with a '/0' to mark the end.
	 *  _ _ _ _ _ __ __
	 * |h|e|l|l|o|\n|\0|
	 *  _ _ _ _ _ __ __
	 *  The %s format specification in printf expects the corresponding argument to
	 *  be a string represented in this form.
	 *  All of this implies that '\0' is not a part of normal text.
	 */

	return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[]) {
	int i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
