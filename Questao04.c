#include<stdio.h>
#include <stdlib.h>
int main(){
        int valor;
        int *p1;
        float temp;
        float *p2;
        char aux;
        char *nome = "Ponteiros";
        char *p3;
        int idade;
        int vetor[3];
        int *p4;
        int *p5;

        /* (a) */
        valor = 10;
        p1 = &valor;
        *p1 = 20;
        printf("%d \n", valor); // imprimi 20, está de acordo com a resposta esperada

         /* (b) */
        temp = 26.5;
        p2 = &temp;
       *p2 = 29.0;
        printf("%.1f \n", temp);// imprimi 29.0, está de acordo com a resposta esperada

        /* (c) */
        p3 = &nome[0];
        aux = *p3;
        printf("%c \n", aux); /* imprimi P, valor armazenado na posicao 0 do vetor,
                               esta de acordo com a reposta esperada*/
        /* (d) */
        p3 = &nome[4];
        aux = *p3;
        printf("%c \n", aux);/* imprimi e, valor armazenado na posicao 4 do vetor,
                              esta de acordo com a reposta esperada*/

        /* (e) */
        p3 = nome;
        printf("%c \n", *p3);// imprimi P, valor da posicao 0 do vetor

        /* (f) */
        p3 = p3 + 4; printf("%c \n", *p3); // imprimi e, como p3 recebeu o valor armazenado na posicao 0 do vetor ao adicionar + 4, estaremos na posicao vetor[4], que esta armazenado a letra e.

        /* (g) */
        p3--;
        printf("%c \n", *p3);//imprimi t, como p3 esta em vetor[4] ao fazer p3-- estaremos em vetor[3] que esta armazenado o a letra t.

        /* (h) */
        vetor[0] = 31;
        vetor[1] = 45;
        vetor[2] = 27;
        p4 = vetor;
        idade = *p4;
        printf("%d \n", idade);// imprimi 31, idade recebe o valor armazenado em vetor[0].

        /* (i) */
        p5 = p4 + 1;
        idade = *p5;
        printf("%d \n", idade);//imprimi 45, anda uma posicao no array, sera impresso o valor armazenado em vetor[1]

        /* (j) */
        p4 = p5 + 1;
        idade = *p4;
        printf("%d \n", idade);//imprimi 27, anda novamente mais uma posicao no array, sera impresso o valor armazenado no vetor[2]
        
        /* (l) */
        p4 = p4 - 2;
        idade = *p4;
        printf("%d \n", idade);//imprimi 31,como p4 esta na posicao vetor[2] ao fazer p4 = p4 - 2 ele volta 2 posicoes no vetor, que é vetor[0].

    system("pause");

    return 0;
}
