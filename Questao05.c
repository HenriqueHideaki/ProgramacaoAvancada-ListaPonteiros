#include <stdio.h>

//Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).
int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    //Sera impresso valor armazenado em cada vetor em seguida sua posicacao na memoria.
    //Exemplo: i = 0,vet[0] = 1.1,*(f + 0) = 1.1,&vet[0] = EFBFF480,(f + 0) = EFBFF480
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i);
        printf(",vet[%d] = %.1f",i, vet[i]);
        printf(",*(f + %d) = %.1f",i, *(f+i));
        printf(",&vet[%d] = %X",i, &vet[i]);
        printf(",(f + %d) = %X",i, f+i);
    }
    
    
    return  0;
}