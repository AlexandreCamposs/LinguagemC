
/* exercicio Gião
int main ()
{
    int contador = 1;

    while (contador <= 100){
        printf("%d\n", contador);
        contador++;
    }
    return 0;
}
*/
//---------------------------------------------------------------------------
/*
int main()
{
    int contador;
    float nota, media, total;
    total = 0;
    contador = 1;
    while (contador <=4) {
        printf("Digita a nota:");
        scanf("%f", &nota);
        total = total + nota;
        contador ++; // usa contador para não entrar em loop o programa
    }
    media = total / 4;
    printf("Nota media: %.2f\n", media);

    return 0;
}
*/
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int contador = 0;
    float valor, media, total;
    total = 0;
    printf("Digite um valor (-1 para encerrar):");
    scanf("%f", &valor);
    while (valor != -1) {
        total = total + valor;
        contador++;
        printf("Digite um valor (-1 para encerrar):");
        scanf("%f", &valor);
    }
    media = total / contador;
    printf("Valor medio: %.2f\n", media);

    return 0;

     }


