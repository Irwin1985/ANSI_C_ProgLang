#include <stdio.h>
float celcius_to_fah(int celcius_grades);
int main_14() {
	for (int celsius = 0; celsius <= 300; celsius += 20) {
		printf("%3d %6.1f\n", celsius, celcius_to_fah(celsius));
	}
	return 0;
}
float celcius_to_fah(int celcius_grades) {
	return (5.0 / 9.0) * celcius_grades - 32;
}