#include <stdio.h>

/* Fahrenheit-Celsius table using for loop */

int main() {
    int fahr;

    for(fahr = 0; fahr <= 300; fahr = fahr + 30){
        printf("%3d %6.1f\n", fahr, ( 5.0 / 9.0) * ( fahr - 32 ));
    }
}