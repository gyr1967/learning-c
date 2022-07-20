#include <stdio.h>

void fahrToCelciusHeader() {
    /* prints fahrenheit to celcius table
    * for fahr = 0,20, ... 300; floating pt conversion */
    float fahr, celcius;
    int lowerLimit, upperLimit, step;

    lowerLimit = 0;
    upperLimit = 300;
    step = 20;

    fahr = lowerLimit;
    printf("Fahr \t Celcius\n");
    while (fahr <= upperLimit) {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}

void celciusToFahr() {
    /* prints celcius to fahrenheit table
    * for celcius = 0,20, ... 300; floating pt conversion */
    float fahr, celcius;
    int lowerLimit, upperLimit, step;

    lowerLimit = 0;
    upperLimit = 300;
    step = 20;

    celcius = lowerLimit;
    printf("Celcius \t Fahrenheit\n");
    while (celcius <= upperLimit) {
        fahr = (9.0 / 5.0) * (celcius) + 32;
        printf("%3.0f %6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
}

void fahrToCelciusForLoop() {
    for (int fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}

void verifyGetcharIsBool() {
    printf("%d\n", getchar() != EOF);
}

void printEOF() {
    printf("%d\n", EOF);
}

void countBlanksTabsNewlines() {
    // eof doesn't work in clion, only worked
    // in online compiler for me
    int c, newLines, tabs, blanks;
    newLines = 0;
    tabs = 0;
    blanks = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++newLines;
        } else if (c == '\t') {
            ++tabs;
        } else if (c == ' ') {
            ++blanks;
        }
    }
    printf("New Lines = %d , Tabs = %d , Blanks == %d", newLines, tabs, blanks);
}

void removeMultipleBlanks() {
    int c, blankAlready;
    blankAlready = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!blankAlready) {
                blankAlready = 1;
                putchar(c);
            }
        } else {
            blankAlready = 0;
            putchar(c);
        }
    }
}

void replaceTabsBackspacesBackslashes() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\b') {
            printf("\\b");
        } else if (c == '\t') {
            printf("\\t");
        } else if (c == '\\') {
            printf("\\\\");
        } else {
            printf("%c", c);
        }
    }
}

void printInputWordPerLine() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
}

void wordLengthHistogram() {
    int c, current_word_length;
    int word_length_count[10];

    c = current_word_length = 0;
    for (int i = 0; i < 10; ++i) {
        word_length_count[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != 10) {
            ++current_word_length;
        } else {
            ++word_length_count[current_word_length - 1];
            current_word_length = 0;
        }
    }
    // horizontal histogram
    for (int i = 0; i < 10; ++i) {
        printf("\n %d", i + 1);
        for (int j = 0; j < word_length_count[i]; ++j) {
            putchar('-');
        }
    }

}

void charFrequencyHistogram() {
    int c;
    int alphabet_char_freq[128];

    for (int i = 0; i < 128; ++i) {
        alphabet_char_freq[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        ++alphabet_char_freq[c];
    }

    for (int i = 0; i < 128; ++i) {
        printf("\n %d", i);
        for (int j = 0; j < alphabet_char_freq[i]; ++j) {
            putchar('-');
        }
    }
}


/*int main() {
    //printf("Hello, World!\n");
     function calls
     * ideally would have separate files to be called externally
     * but don't want to mess with auxiliary functions just yet

    //fahrToCelciusHeader();
    //celciusToFahr();
    //fahrToCelciusForLoop();
    //verifyGetcharIsBool();
    //printEOF();
    //countBlanksTabsNewlines();
    //removeMultipleBlanks();
    //replaceTabsBackspacesBackslashes();
    //printInputWordPerLine();
    //wordLengthHistogram();
    charFrequencyHistogram();
    //return 0;
}*/
