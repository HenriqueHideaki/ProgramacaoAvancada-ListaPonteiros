#include<stdio.h>

int main(){
    /* Se i e j são variáveis inteiras e p e q 
    ponteiros para int, quais das seguintes expressões de atribuição são ilegais? */
    int i=5,j=2;
    int *p,*q;
    
    p = i; // p recebe o valor armazenado em i.
    q = &j; //q recebe o endereço de j 
    p = &*&i; //p recebe o endereco de i 
    i = (*&)j; // atribuição ilegal 
    i = *&j; // i recebe o valor armazenado em j 
    i = *&*&j; // i recebe o valor armazenado em j
    q = *p; // q recebe o valor armazanado em p 
    i = (*p)++ + *q; // retorna null

    


    return 0;
}