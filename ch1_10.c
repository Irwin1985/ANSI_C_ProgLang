// escribir un programa que imprima su propia entrada
// pero que remplace uno o más espacios en blanco 
// por uno solo.

#include <stdio.h>

main_10(){
	int c, hay_espacios = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		if (c == '\b')
			printf("\\b");
		if (c == '\\')
			printf("\\\\");
		else
			printf("%c", c);
	}
	//while ((c = getchar()) != EOF) {
	//	if (c == ' ') {
	//		if (hay_espacios == 0) {
	//			hay_espacios = 1;
	//			putchar(c);
	//		}
	//		// Nos aspiramos el espacio.
	//	}
	//	if (c != ' ') {
	//		hay_espacios = 0;
	//		putchar(c);
	//	}
	//}
}