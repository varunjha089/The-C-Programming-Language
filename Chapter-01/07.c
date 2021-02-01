/* Page -> 18*/
#include <stdio.h>

/* count character in input; 1st Version */

int main(){
    long nc;

    nc = 0;
    while( getchar() != EOF ){
        ++nc;
    }

    printf("%1d\n", nc);
}