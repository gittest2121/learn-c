#include <stdio.h>
#define TOTAL_CHARS 128  /* Total Number of characters is 128: 0 - 127 */
int main(void) {
	int c, i, j;
	int chars[TOTAL_CHARS];
	for(i = 0; i < TOTAL_CHARS; ++i)
		chars[i] = 0;
	
	while((c=getchar()) != EOF)
		chars[c] = chars[c] + 1;
	
	for(i=0; i<TOTAL_CHARS; ++i) {
		putchar(i);
		putchar(' ');		
		for(j=0; j < chars[i]; ++j)
			putchar('*');
		putchar('\n');
	}
}	
