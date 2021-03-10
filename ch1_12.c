#include <stdio.h>

main_12() {
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i) {
		ndigit[i] = 0; // aquí solo está inicializando los elementos del array.
	}

	while ((c = getchar()) != EOF) {
		if ('0' <= c && c <= '9') { // c es un digito?
			++ndigit[c - '0']; // Incrementamos el índice correspondiente.
		}
		else if (c == ' ' || c == '\t' || c || c == '\n') {
			++nwhite;
		}
		else {
			++nother;
		}
	}
	printf("digits =");
	for (i = 0; i < 10; ++i) {
		printf(" %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);
}