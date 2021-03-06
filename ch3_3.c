#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXOP 100 /* tama?o m?ximo de operandos u operadores */
#define NUMBER '0' /* flag para n?mero encontrado */


#define MAXVAL 100 /* maximun depth of val stack */
int sp = 0; /* next free stack position */
double val[MAXVAL]; /* value stack */

int getch(void);
void ungetch(int);
int getop(char[]);
void push(double);
double pop(void);

/* Calculadora RPC */
main_3_3()
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF)
	{
		switch (type)
		{
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() + pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0) 
			{
				push(pop() / op2);
			}
			else
			{
				printf("error: zero divisor\n");
			}
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("error: unknown command %s\n", s);
			break;
		}
		return 0;
	}
}

void push(double f)
{
	if (sp < MAXVAL)
	{
		val[sp++] = f;
	}
	else
	{
		printf("error: stack full, can't push %g\n", f);
	}
}

double pop(void)
{
	if (sp > 0)
	{
		return val[--sp];
	}
	else
	{
		printf("error: stack empty\n");
		return 0.0;
	}
}

int getop(char s[])
{
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t')
	{
		;
	}
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
	{
		return c;
	}
	i = 0;
	if (isdigit(c))
	{
		while (isdigit(s[++i] = c = getch())) 
		{
			;
		}
	}
	if (c == '.')
	{
		while (isdigit(s[++i] = c = getch()))
		{
			;
		}
	}
	s[i] = '\0';
	if (c != EOF)
	{
		ungetch(c);
	}
	return NUMBER;
}