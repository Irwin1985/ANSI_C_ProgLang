#include <stdio.h>

main_5() {
	float fahr, celsius;
	float lower = 0, upper = 42, step = 2;

	celsius = lower;
	printf("CEL\tFAH\n");
	while (celsius <= upper) {
		fahr = (celsius * 9.0 / 5.0) + 32;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius += step;
	}
	

}