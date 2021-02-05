/* Write a program that prints its input one word per line. */

#include <stdio.h>

#define IN      1       /* Inside a word  */
#define OUT     0       /* Outside a word */

int main() {
    int c, state;

    state = OUT;

    while ( ( c = getchar() ) != EOF ){
        if ( c == ' ' || c == '\n' || c == '\t' ){
            if ( state == IN ){
                putchar('\n');
                state = OUT;
            }
        } else if ( state == OUT ){
            state = IN;
            putchar(c);
        } else {
            putchar(c);
        }
    }
}