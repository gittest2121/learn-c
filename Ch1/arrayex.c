/* Write a program to count the number of occurences of each digit, of white space characters
 * (blank, tab, newline), and of all other characters. 
 * Example from K&R C */
#include <stdio.h>
int main(void) {
	int c, i, whiteno, otherno;
	int digitno[10];

	whiteno = otherno = 0;
	for (i = 0; i < 10; ++i)
		digitno[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9')
			++digitno[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++whiteno;
		else
			++otherno;
	}
	printf("No. of Digits = ");
	for (i = 0; i < 10; ++i)
		printf("%d, ", digitno[i]);
	printf("No. of Whitespaces = %d, No. of Other Characters = %d\n", whiteno, otherno);
}

/* The first if statement checks to see if the character is a number. 
 * In ASCII, number have the value of 0x30 ('0') through 0x39 ('9'), so 
 * we check to see if the character is in that range. If it is, we increment the 
 * appropriate value in the ndigit array. For example, suppose that we have read in 
 * the character '5' which has an ASCII value of 0x35. Because 0x35 is between 0x30 
 * and 0x39 we have a digit. Performing the subtraction c - '0' is equivalent to 
 * 0x35 - 0x30 which equals 0x05. We then use this as the index into the array, and 
 * increment the appropriate value with ++ndigit[c-'0']. 
 * Source: https://stackoverflow.com/a/37900520 */
