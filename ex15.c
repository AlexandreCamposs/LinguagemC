#include <stdio.h>
#include<stdlib.h>
/* Gião exercicio
int main ()
{
    int num;
    int contador;
        for (contador = 1; contador <=10; contador++){
            printf("%d\n", contador);
        }
        return 0;
}


int main ()
{
int cont;

float nota, media, total;
total = 0;
for (cont = 1; cont <=4; cont++) {
    printf("Digite a nota:");
    scanf("%f", &nota);
    total = total + nota;
}
media = total / 4;
printf ("Nota media: %.2f\n", media);
return 0;
 }

 */

int main()
{
    int cont;
    char cod;
    float nota, media, total;
    total = 0;
    cod = 'C'; 
    while (cod != 'F') {
        for (cont = 1; cont <= 4; cont++) {
            printf("Digite a nota:");
            scanf("%f", &nota);
            total = total + nota;
        }
        media = total / 4;
        printf("Nota media: %.2f\n", media);
        total = 0;
        nota =0 ;
        printf("Deseja calcular a medida de mais um aluno? Pressione qualquer tecla para prosseguir, ou a tecla 'F' para finalizar o programa\n");
        cod = getchar(); //getche 
    }
     return 0;
}
