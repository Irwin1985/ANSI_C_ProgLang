#include <stdio.h>
main_9() {
	int c, n1 = 0, ntabs = 0, nspaces = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			n1++;
		}
		else if (c == '\t') {
			ntabs++;
		}
		else if (c == ' ') {
			nspaces++;
		}
	}
	printf("Total Lineas: %d\n", n1);
	printf("Total tabs: %d\n", ntabs);
	printf("Total espacios: %d\n", nspaces);
}