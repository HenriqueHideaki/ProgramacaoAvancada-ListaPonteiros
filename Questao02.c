    #include<stdio.h>

    int main(){ 
        int i=5, *p;
        p = &i;
        printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

        // p = 4094, p é o endereço de i então será immpresso 4094
        // *p+2 = 7, o conteudo de p é 5 , logo p+2=7 então será impresso 7
        // **&p = 5, **&p é o valor de i então será impresso 5
        // 3**p = 15, 3 vezes o valor de i=5, logo será impresso 15
        // **&p+4 = 9, o valor de i + 4,como i = 5 ,será impresso 9
        
        return 0;
    }