#include <stdio.h>

int main(){
    //Suponha que as seguintes declarações tenham sido realizadas:
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
    //Identifique quais dos seguintes comandos é válido ou inválido:
    aloha[2] = value;//valido, recebe o valor de value que é 2.2
    scanf("%f", &aloha);//válido, armazena o valor e armazena em aloha[0]
    aloha = "value";//invalido, pois aloha é um ponteiro, logo nao pode receber uma palavra
    printf("%f", aloha);//valido, imprimi o valor armazenado em aloha[0]
    coisas[4][4] = aloha[3];//valido, recebe o valor de aloha[3]
    coisas[5] = aloha;//valido, recebe o valor de aloha[0]
    pf = value;//invalido, pois pf é um ponteiro logo nao pode receber um float, somente seu endereço
    pf = aloha;//valido, recebe o endereço de aloha 
    return 0;
}
