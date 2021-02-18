#include <stdio.h>


int main(){
    //O que fazem os seguintes programas em C?
    
    //Respotas:
    // Esse programa imprime, os tres valores armazendos no vetor[].
    
    int vet[] = {4,9,13}; //declaracao de um vetor com 3 elementos
    int i; //declara uma variavel inteira i
        for(i=0;i<3;i++){
        printf("%d\n",*(vet+i)); //percorre o vetor imprimindo os valores armazenados.
      } 
    
    //Esse programa imprimi os enderecos das variaveis armazenadas no vetor[]
    int vet[] = {4,9,13};//declaracao de um vetor com 3 elementos
    int i;//declara uma variavel inteira i
        for(i=0;i<3;i++){
             printf("%X ",vet+i); // percorre o vetor imprimindo seus enderecos.
           }
    
    return 0;
}
