#include <stdio.h>
int is_letter(int letter);
main_11() {
    int c;
    while ((c = getchar()) != EOF) {
        if (is_letter(c) == 0) {
            putchar(c);
        }
        else if (c == ' ' || c == '\t' || c == '\n') {
            putchar('\n');
        }
    }
}
int is_letter(int letter) {
    if ('a' <= letter && letter <= 'z' || 'A' <= letter && letter <= 'Z') {
        return 0;
    }
    return 1;
}