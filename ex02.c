#include <stdio.h>
#include<stdlib.h>

void main ()
{
    int num1, num2, soma;  //int serve para declarar as variáveis
    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1); //scanf vai ler o que o usuario digitou
    printf("Digite o segundo numero\n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Soma: %d\n", soma);

}