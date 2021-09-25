#include <stdio.h>
#include<stdlib.h>

int main ()
{
    int a, b;
    printf("Soma de dois números");
    printf("Digite o primeiro número:\n");
    scanf("%d", &a);
    printf("Digite o segundo número\n");
    scanf("%d", &b);
    printf("\n");
    printf("A soma de %d com %d é %d\n",a, b, a+b);
    
    return 0;
}