#include <stdio.h>

void fahrToCelciusHeader(){
    /* prints fahrenheit to celcius table
    * for fahr = 0,20, ... 300; floating pt conversion */
    float fahr, celcius;
    int lowerLimit, upperLimit, step;

    lowerLimit = 0;
    upperLimit = 300;
    step = 20;

    fahr = lowerLimit;
    printf("Fahr \t Celcius\n");
    while (fahr <= upperLimit){
        celcius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}

void celciusToFahr(){
    /* prints celcius to fahrenheit table
    * for celcius = 0,20, ... 300; floating pt conversion */
    float fahr, celcius;
    int lowerLimit, upperLimit, step;

    lowerLimit = 0;
    upperLimit = 300;
    step = 20;

    celcius = lowerLimit;
    printf("Celcius \t Fahrenheit\n");
    while (celcius <= upperLimit){
        fahr = (9.0/5.0) * (celcius) + 32;
        printf("%3.0f %6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
}

void fahrToCelciusForLoop(){
    for (int fahr = 300; fahr >= 0 ; fahr -= 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}

void verifyGetcharIsBool(){
    printf("%d\n", getchar() != EOF);
}

void printEOF(){
    printf("%d\n", EOF);
}

int main() {
    printf("Hello, World!\n");
    /* function calls
     * ideally would have separate files to be called externally
     * but don't want to mess with auxiliary functions just yet
     */
    //fahrToCelciusHeader();
    //celciusToFahr();
    //fahrToCelciusForLoop();
    //verifyGetcharIsBool();
    printEOF();
    return 0;
}
