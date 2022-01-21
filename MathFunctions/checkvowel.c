/* While this is not a math function, this would be a good problem
 * Write a program to check whether a character is a vowel or consonant */
#include <stdio.h>
#include <ctype.h>
int main(void) {
	char c;
	int lowercase_vowel, uppercase_vowel;
	printf("Enter an alphabet: ");
	c = getchar();

	// evaluate to 1 if variable c is a lowercase vowel
	lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	// evaluate to 1 if variable c is a uppercase vowel
	uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	// show error message if c is not an alphabet
	if (!isalpha(c))
		printf("Error! Non-alphabetic character.\n");
	else if (lowercase_vowel || uppercase_vowel)
		printf("%c is a vowel.\n", c);
	else
		printf("%c is a consonant.\n", c);
}
