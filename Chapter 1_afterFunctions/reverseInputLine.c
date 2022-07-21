#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void reverse(char string[]);
/* print the longest input line */
int main(void) {
    char line[MAXLINE]; /* current input line */

    while(get_line(line, MAXLINE) > 0){
        reverse(line);
    }
    return 0;
}


/* get_line: read a line into s, return length */

int get_line(char s[], int lim) {
    int c, i, l;

    for (i = 0, l = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 1)
            s[l++] = c;
    }
    if (c == '\n') {
        if (l < lim - 1)
            s[l++] = c;
        ++i;
    }
    s[l] = '\0';

    return i;
}

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}


void reverse(char string[]){
    int string_length = 0;
    for (int i = 0; string[i] != '\0'; ++i){
        ++string_length;
    }
    for (int j = string_length; j >= 0 ; --j) {
        putchar(string[j]);
    }
}