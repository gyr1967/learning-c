#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);

/* print the longest input line */
/*int main(void) {
    int len; *//* current line length *//*
    char line[MAXLINE]; *//* current input line *//*

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > 1 && line[0] != '\n') {
            printf("%s\n", line);
        }
    }
    return 0;
}*/


/* get_line: read a line into s, return length */
/*
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
*/

