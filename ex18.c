#include <stdio.h>
#include <stdlib.h>
/*
int main () 
{
    float notas[4] = {7.5, 8.0, 6.5, 3.5};
    int i;

    for (i = 0; i < 4; i++) {
        printf("Nota %d, %4.2f\n",  i + 1, notas[i] );
    }
    return 0;
}
*/


int main () 
{
     float notas[4] = {7.5, 8.0, 6.5, 3.5};
    int i;
    int total = 0;

    for (i = 0; i <4; i++){
        printf("Entre com a %d nota do aluna: \n", i +1);
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < 4; i++) {
        printf("Nota %d, %4.2f\n",  i + 1, notas[i] );
    }
    return 0;
}
