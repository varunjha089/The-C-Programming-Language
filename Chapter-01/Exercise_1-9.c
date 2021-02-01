/* Write a program to copy its output, 
    replacing each string of one or more blanks by single blank. */

#include <stdio.h>

#define NONBLANK 'a'
int main(){
    int c, lastc;

    lastc = NONBLANK;

    while ( ( c = getchar() ) != EOF ){

        if ( c != ' ' ){
            putchar(c);
        }

        if ( c == ' ' ){
            if ( lastc != ' ' ){
                putchar(c);
            }
        }

        lastc = c;
    }
}