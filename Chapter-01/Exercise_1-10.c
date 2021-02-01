/*  Write a program to copy its input to its output, 
    replacing each tab by \t, each backstabe by \b, 
    and each backslash by \\. This makes tab and backspace
    wisible in an unambigious way. */

#include <stdio.h>

int main(){
    int c;

    while( ( c = getchar() ) != EOF ){

        /* Replacing tab */
        if ( c == '\t' ){
            printf("\\t");
        }

        /* Replacing backspace */
        if ( c == '\b' ){
            printf("\\b");
        }

        /* Replacing backslash */
        if ( c == '\\' ){
            printf("\\\\");
        }

        if ( c != '\b' ){
            if ( c != '\t' ){
                if ( c != '\\'){
                    putchar(c);
                }
            }
        }
    }
}