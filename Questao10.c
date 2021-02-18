/*Implemente um programa de computador para testar estas suposições e compare as respostas oferecidas pelo programa com as respostas que você idealizou.*/
// Resposta: Os resultados obtidos foram diferentes do esperado.
#include<stdlib.h>
#include<stdio.h>

int main(){
    char vetor_char[4];
    char *ptr_char;
    
    printf("Para char: \n");
    for (int i=0; i<4; i++) {
        ptr_char = &vetor_char[i];
    }
    for (int i=0; i<4; i++) {
        printf("%d\n",(ptr_char+i));
    }
    
    printf("\nPara int: \n");
    int vetor_int[4];
    int *ptr_int;
    
    for (int i=0; i<4; i++) {
        ptr_int = &vetor_int[i];
    }
    for (int i=0; i<4; i++) {
        printf("%d\n",(ptr_int+i));
    }
    
    printf("\nPara float: \n");
    float vetor_float[4];
    float *ptr_float;
    
    for (int i=0; i<4; i++) {
        ptr_float = &vetor_float[i];
    }
    for (int i=0; i<4; i++) {
        printf("%d\n",(ptr_float+i));
    }
    
    printf("\nPara double: \n");
    double vetor_double[4];
    double *ptr_double;
    
    for (int i=0; i<4; i++) {
        ptr_double = &vetor_double[i];
    }
    for (int i=0; i<4; i++) {
        printf("%d\n",(ptr_double+i));
    }
    
    
    
  return(0);
}
