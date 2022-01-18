/* Verify that the expression getchar() != EOF is 0 or 1 */
#include <stdio.h>
int main(void) {
	printf("The expression getchar() != EOF evaluated to %d\n", getchar() != EOF);
}
