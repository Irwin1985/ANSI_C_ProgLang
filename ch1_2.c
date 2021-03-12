#include <stdio.h>
/* Imprime una tabla de conversión de Grados Celcius a Fahrenheit */

main_2() {
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; // El límite más bajo en la escala de temperaturas
	upper = 300; // El límite más alto al que llegaremos.
	step = 20; // el intervalo en cada temperatura

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d\t%6d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
