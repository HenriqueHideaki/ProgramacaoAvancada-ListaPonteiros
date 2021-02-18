#include <stdio.h>
#include <stdlib.h>

void multiplicaMatriz(int **matrizA, int **matrizB, int **matrizC,int linhaA, int colunaA, int colunaB){
    int i,j,k,temp=0;
    for (i=0; i<linhaA; i++) {
        for (j=0; j<colunaB; j++) {
            for (k=0; k<colunaA; k++) {
                temp = temp + matrizA[i][k]*matrizB[k][j];
            }
            matrizC[i][j] = temp;
            temp = 0;
        }
    }
}
int main(){
    int **matA,**matB,**matC;
    int i,j;
    int linhaA=2, colunaA=2, linhaB=2, colunaB=2;
    
    matA = (int **)malloc(linhaA * sizeof(int*));
    matA[0] = (int *)malloc(linhaA * sizeof(int));
    for (i=1; i<linhaA; i++) {
        matA[i]=matA[i-1] + colunaA;
    }
    
    matB = (int **)malloc(linhaB*sizeof(int*));
    matB[0] = (int *)malloc(linhaB * colunaB * sizeof(int));
    for(i=1;i<linhaB;i++){
        matB[i]=matB[i-1] + colunaB;
    }
    
    matC = (int **) malloc(linhaA * sizeof(int*));
    matC[0] = (int*)malloc(linhaA * colunaB *sizeof(int));
    for(i=1;i<linhaA;i++){
        matC[i]=matC[i-1] + colunaB;
    }
    
    matA[0][0] = 1, matA[0][1] = 2;
    matA[1][0] = 3, matA[1][1] = 4;
    
    printf("Matriz A: \n");
    for(i=0;i<linhaA;i++){
            for(j=0;j<colunaA;j++){
                printf("%2d ",matA[i][j]);
            }
            printf("\n");
        }
   
    
    matB[0][0] = 5, matB[0][1] = 6;
    matB[1][0] = 7, matB[1][1] = 8;
    
    printf("Matriz B: \n");
    for(i=0;i<linhaB;i++){
            for(j=0;j<colunaB;j++){
                printf("%2d ",matB[i][j]);
            }
            printf("\n");
        }
    
    multiplicaMatriz(matA,matB,matC,linhaA,colunaA,colunaB);
    printf("Matriz A * Matriz B: \n");
    for(i=0;i<linhaA;i++){
            for(j=0;j<colunaB;j++){
                printf(" %2d ",matC[i][j]);
            }
            printf("\n");
        }
    
}
