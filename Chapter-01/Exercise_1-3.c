#include <stdio.h>

/* Print Fahrenheit-Celsius table
    for fahr = 0, 20, ...., 300.
    Floating Point is being used here.*/

int main(){
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;      /* Lower limit of temperature table */
    upper = 300;    /* Upper limit*/
    step = 20;      /* Step size*/

    printf("Fahr\tCelsius\n");
    fahr = lower;
    while(fahr <= upper){
        celsius = ( 5.0 / 9.0 ) * ( fahr - 32.0 );
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}