/*  Page-16 K&R. 
    Character Input and Output
        - File Copying
*/

#include <stdio.h>

int main(){
    int c;

    c = getchar();
    while ( c != EOF )
    {
        putchar(c);
        c = getchar();
    }
    
}