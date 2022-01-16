/* Write a program to count No. of words from input 
 * Words are sequence of characters that doesn't contain blank, tab or newline 
 * Code Example from K&R C */

#include <stdio.h>
#define IN 1
#define OUT 0
int main(void) {
	int c, lineno, charno, wordno, state = OUT;
	lineno = charno = wordno = 0;
	while ((c = getchar()) != EOF) {
		++charno;
		if (c == '\n')
			++lineno;

		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++wordno;
		}
	}
       	printf("\nNo. of Words: %d\n", wordno);  
	printf("No. of Lines: %d\n", lineno);  
	printf("No. of Characters: %d\n", charno);
}

/* && has higher precendence than || 
 * This is a bare-bones program and contains some bugs such as:
 * 	Use of Special Characters
 * 	Bigger Words than the value of int
 * 	Alphabets (These are not words)
 * 	
 * 	Extra cases can be found here: https://stackoverflow.com/q/5717411 */
