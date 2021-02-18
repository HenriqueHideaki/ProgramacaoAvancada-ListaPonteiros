/*O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e escreva um pequeno programa exemplificando o uso deste recurso.
 
Resposta: Na linguagem c ,por padrão, a passagem de argumentos é feita por valor, e isso não permite que uma função manipule diretamente uma variavel que esta sendo passada a ela, os ponteiros resolvem esse problema dando acesso ao endereço dessas variaveis e assim podendo manipulá-las.*/
//Exemplo:
#include <stdio.h>

void troca(int a, int b){
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("a=%d,b=%d\n",a,b);
}

void troca_componteiros(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    printf("a=%d,b=%d\n",*a,*b);
}

int main(){
    int a=2,b=3;
    troca(a,b);
    printf("a=%d,b=%d\n",a,b);// observe aqui que os valores das variaveis nao foram trocadas
    printf("Agora fazendo o uso dos ponteiros: \n");
    troca_componteiros(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}

