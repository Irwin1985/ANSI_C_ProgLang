#include <stdio.h>

main_6() {
	// La misma tabla de conversión pero usando un for.
	for (float fahr = 300; fahr >= 0; fahr -= 20) {
		printf("%3.0f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
}