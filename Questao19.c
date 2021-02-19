/* O coletor de lixo em inglês, Garbage collector(CG),é utilizado para automação do gerenciamento
de memória, em c por exemplo, é comum a gestão manual da memória, sempre que é alocado
uma quatidade de memória dinamicamente, temos que nos preocupar com a liberação dessa memória.
*/

//Exemplo
#include<stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int *) malloc(100*sizeof(int));// alocação de memória suficiente para armazenar 100 inteiros.
    
    free(ptr); //comando free para liberação da memória alocada
    //Caso essa liberação não seja feita ocorrera um vazamento de memória conhecido também como memory leak.

    return 0;
}
/* Utilizando o Gabage Collector */
/*
 # include<gc.h>
 # include<stdio.h>

 int  main () {
         GC_INIT (); //Comando para inicializar a biblioteca libGC
         int * ptr;
         ptr = (int *)GC_MALLOC(100*sizeof(int));// A memória é alocada usando o GC_MALLOC sem a necessisdade de liberar a memória
alocada, o que pode evitar o vazamento de memória
   
         return  0 ;
 }

*/
