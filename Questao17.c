#include <stdio.h>
 #include <stdlib.h>

 void somavetor(float *vetor1,float *vetor2, float *vetor_soma, int tam){
     int i,j;
     printf("A soma dos vetores eh: \n");
     for (i=0; i<tam; i++) {
         vetor_soma[i] = vetor1[i] + vetor2[i];
     }
     for (j=0; j<tam; j++) {
         printf("%.3f \n",vetor_soma[j]);
     }
 }
int main(){
     int tam;
     printf("Digite o tamanho do vetor: ");
     scanf("%d",&tam);
     float num1,num2;
     float vet1[tam],vet2[tam],vet3[tam];

     printf("Digite os elementos do primeiro vetor: \n");
     for (int i=0; i<tam; i++) {
         scanf("%f",&num1);
         vet1[i] = num1;
     }
     printf("Digite os elementos do segundo vetor: \n");
         for (int j=0; j<tam; j++) {
             scanf("%f",&num2);
             vet2[j] = num2;
         }
 
    somavetor(&vet1, &vet2, &vet3,tam);
    system("pause");
    return 0;
}
