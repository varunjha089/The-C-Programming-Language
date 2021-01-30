#include <stdio.h>

/* Print Fahrenheit-Celsius table
    for fahr = 0, 20, ...., 300 */

int main(){
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;      /* Lower limit of temperature table */
    upper = 300;    /* Upper limit*/
    step = 20;      /* Step size*/

    fahr = lower;
    while(fahr <= upper){
        celsius = ( 5.0 / 9.0 ) * ( fahr - 32.0 );
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}