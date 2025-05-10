#include <stdio.h>

void movertorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movertorre(casas - 1);
    }
}

void moverbispo(int casas){
    if (casas > 0) {
        for (int v = 0; v < 1; v++) {
            for (int h = 0; h < 1; h++) {
                for (int h = 0; h < 1; h++) {
                    printf("Cima, Direita\n");
                }
            }
        }
        moverbispo(casas - 1);
    }
}

void moverrainha (int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
}

int main() {
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    printf("Movimento da Torre\n");
    movertorre(torre);

    printf("Movimento do Bispo\n");
    moverbispo(bispo);
   
    printf("Movimento da Rainha\n");
    moverrainha(rainha);

    printf("Movimento do Cavalo\n");
    int movcavalovertical = 2;
    int movcavalohorizontal = 1;

    for (int i = 1; i <= movcavalovertical; i++) {
        if (i == 2) {
            for (int j = 1; j <= movcavalohorizontal; j++) {
                if (j == 1) {
                    print("Direita\n");
                    continue;
                }
                break;

            }
        }
        printf("Cima\n");
    }

    return 0;
}
