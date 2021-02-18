#include <stdio.h>

int main(){
    //Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas? Justifique.
    
    int mat[4]={1,2,3,4}, *p, x;
    
    p = mat + 1; // expressao valida, anda uma posicao na memoria e recebe o endereco do segundo elemento.
    p = mat++; // expressao invalida
    p = ++mat; // expressao invalida
    x = (*mat)++; // expressao valida, recebe o valor do primeiro elemento do vetor
   
    
    
    return 0;
}
