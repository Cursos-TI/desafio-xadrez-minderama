#include <stdio.h>

int main() {
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    
    printf("Movimento da Torre\n");

    for(int i = 1; i <= torre; i++){
        printf("Direita\n");
    }

    printf("Movimento do Bispo\n");
    int a = 1;

    while (a <= bispo){
        printf("Cima, direita\n");
        a++;
    }

    printf("Movimento da Rainha\n");
    int b = 1;
    do{
        printf("Esqueda\n");
        b++;
    } while (b <= rainha);

    


    return 0;
}
