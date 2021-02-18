#include<stdio.h>

int main(){
    int i=3,j=5; 
    int *p, *q; 
    p = &i;
    q = &j;
    
    p == &i; // true, p é um ponteiro que aponta para i e &i é o endereço de i logo p==&i é verdadeiro
    *p - *q; // -2 ,*p=3 e *q=5, *p - *q -> 3 - 5 = -2 
    **&p; // 3, o valor armazenado em i
    3 - *p/(*q) + 7; // 0, como *p = 3, 3-*p/(*p)+7 -> 3-3/(*p)+7 -> 0/(*P)+7 -> 0



    return 0;
}
