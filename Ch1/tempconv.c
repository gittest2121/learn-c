/* Temperature Conversion Program using subroutines */
#include <stdio.h>
float celsius_to_farenheit(float);
int main(void) {
	float i;
	printf("Celsius\tFarenheit\t\n");
	printf("------------------------\n");
	for (i = 0.0; i <= 100.0; i += 10.0)
		printf("%.0f\t%.0f\n", i, celsius_to_farenheit(i));
}

float celsius_to_farenheit(float celsius) {
	return ((9*celsius/5)+32);
}
