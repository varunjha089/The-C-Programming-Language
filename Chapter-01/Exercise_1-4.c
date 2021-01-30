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

    printf("Celsius\tFahr\n");      /* Title Added as according to Exercise*/
    fahr = lower;
    while(fahr <= upper){
        fahr = ( 9.0 * celsius ) / 5.0 + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}