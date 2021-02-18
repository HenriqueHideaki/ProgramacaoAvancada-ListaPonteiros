#include <stdio.h>
#include <stdlib.h>


int main(){
    int tam,i;
    float *vetor;
    printf("Digite o tamanho do vetor: \n");
    scanf("%d",&tam);
    vetor = (float *) malloc(tam * sizeof(float));
    
    float aux;
        
    printf("Digite os elementos do seu vetor: \n");
    for(i=0;i<tam;i++){
        scanf("%f",&vetor[i]);
    }
    printf("O vetor digitado eh: \n");
    for (i=0;i<tam;i++) {
        printf("%4f\t",vetor[i]);
    }

    for(int j=1;j<tam;j++){
        for (int i=0; i<tam-1; i++) {
            if (vetor[i]>vetor[i+1]) {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
    
    printf("\nVetor ordenado: \n");
    for (i=0; i<tam; i++) {
        printf("%4f\t",vetor[i]);
    }
    free(vetor);
    return 0;
    
}
