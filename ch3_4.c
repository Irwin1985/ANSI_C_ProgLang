#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void print_args(char* args, ...);
int main(int argc, char* argv[])
{
	//FILE* handler = fopen("f:\\desarrollo\\test.txt", "w");
	//char* line = malloc(1000 * sizeof(char));
	//fgets(line, 1000, handler);
	//fclose(handler);
	//free(line);
	return 0;
}

void print_args(char* args, ...)
{
	va_list ap; // apunta a cada uno de los argumentos de args
	va_start(ap, args); // apuntar al primer argumento sin nombre.
	char* p;
	for (p = args; *p; p++)
	{
		printf("%s\n", va_arg(ap, char*));
	}
	va_end(ap); // limpiar al terminar
}