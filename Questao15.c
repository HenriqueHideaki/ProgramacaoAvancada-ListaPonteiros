#include <stdio.h>
#include <stdlib.h>

int * compara(const void *a, const void *b){
    return (int *) (*(int *)a - *(int *)b);
}

int main () {
    int vetor[5]={5,4,3,2,1};
    int i;
    
    qsort(vetor, 5, sizeof(int), compara);
    for (i=0; i<5; i++) {
        printf("%d\n",vetor[i]);
    }
   return 0;
}

