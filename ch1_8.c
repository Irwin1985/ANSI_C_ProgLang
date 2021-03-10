#include <stdio.h>

main8() {
	// Leemos una secuencia de caracteres (hasta el ENTER)
	// y la mostramos en un loop. repetimos lectura.
	// version 1
	int c;
	//c = getchar();
	//while (c != EOF) {
	//	putchar(c);		
	//	c = getchar();
	//}
	// version 2
	/*
	* La tabla de precedencia de C es la siguiente:
	* ORDEN	| NOMBRE	| OPERADORES
	*   1	 equality		'='
	*   2	 comparison		'<', '>', '<=', '>=', '==', '!='
	*   3	 term			'+', '-'
	*   4	 factor			'*', '/'
	*   5	 unary			'!', '-'
	*/
	//while (1) {
	//	c = getchar();		
	//	putchar(c);
	//	if (c == EOF) {
	//		break;
	//	}
	//}
	//long nc;
	//nc = 0;
	//while (getchar() != EOF) {
	//	//++nc;
	//	printf("%ld\n", ++nc);
	//}
	double nc;
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}