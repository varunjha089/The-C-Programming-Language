/* Write a program to count blank, tabs, and newline. */

#include <stdio.h>

int main(){
    int c, nb, nt, nl;

    nb = 0;                 /* Number of blank    */
    nt = 0;                 /* Number of tabs     */ 
    nl = 0;                 /* Number of newlines */

    while ( ( c = getchar() ) != EOF ){

        /* Condition for blanks */
        if ( c == ' ' ){
            ++nb;
        }

        /* Condition for tabs */
        if ( c == '\t' ){
            ++nt;
        }

        /* Condition for newlines */
        if ( c == '\n' ){
            ++nl;
        }
    }

    printf("%d %d %d\n", nb, nt, nl);
}