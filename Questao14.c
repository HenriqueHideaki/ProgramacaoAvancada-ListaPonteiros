#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* A função compara é fundamental para o uso da função qsort(), nela definimos dois valores a e b que serão comparados, se a e b forem iguais ela retorna 0, se a for menor do que b ela retorna -1 e se a for maior do que b, ela retorna 1.*/
int compara(const void * a, const void * b){
    if (*(int *)a == *(int *)b)
        return 0;
    else
        if (*(int *)a < *(int *)b)
            return  -1;
        else
            return 1;
}

int main(){
    int tam,i;// Aqui declaro dois inteiros, uma para receber o tamanho do vetor e outro para o laço for.
    float *vet;// Ponteiro para realizar a alocação.
    printf("Digite o tamanho do vetor: \n");
    scanf("%d",&tam);// Peço a usuário digitar o tamanho do vetor e armazeno em tam.
  
    
    vet = (float *) malloc(tam*sizeof(float));//Alocação dinâmica do vetor.
    
    printf("Digite os elementos do vetor:\n");
    for (i=0; i<tam; i++) {
        scanf("%f",&vet[i]); // Preenchimento do vetor.
    }
    
    qsort(vet, tam, sizeof(float), compara);// Função qsort que fará a ordenação do vetor, recebe primeiramente o vetor em seguida seu tamanho, depois o tamanho de cada elemento utilizando o sizeof e a função de comparação, feito isso o vetor esta ordenado!!
    printf("Seu vetor ordenado eh: \n");
    for (i=0; i<tam; i++)
        printf("%4f\n", vet[i]);//imprimi o vetor ordenado.
    
    
    system("pause");
    return 0;
}
