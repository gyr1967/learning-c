#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */
#define TABWIDTH 4 /* number of spaces in a tab */

int get_line(char line[], int maxline);
int detab(char line[], char line_copy[], int tab_width);

int main(void){
    int len;
    char line[MAXLINE];
    char line_copy[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        detab(line, line_copy, TABWIDTH);
    }
    for (int i = 0; i < 40; ++i) {
        putchar(line_copy[i]);
    }
    return 0;
}
// gets length of line
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

int detab(char line[], char line_copy[], int tab_width){
    int c, i;
    while ((c = line[++i]) != '\0') {
        if(c == '\t'){
            for (int j = 0; j < 4; ++j) {
                line_copy[i] = ' ';
            }
        } else{
            line_copy[i] = c;
        }
    }
}



