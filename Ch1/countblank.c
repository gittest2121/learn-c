/* Write a program to count number of blanks, tabs & newlines from input */
#include <stdio.h>
int main(void) {
	int blanks = 0, tabs = 0, newlines = 0, c;
	c == getchar();
	while ((c = getchar()) != EOF)
		if (c == ' ')
			++blanks;
		else if (c == '\t')
			++tabs;
		else if (c == '\n')
			++newlines;
	printf("No. of blanks: %d\n", blanks);
	printf("No. of tabs: %d\n", tabs);
	printf("No. of newlines: %d\n", newlines);
}
