#include <stdio.h>

int main(void) {
    int numeros[8], i, inverter;

    for(i = 0; i < 8; i++) {
        numeros[i] = i+1;
    }

    for(i = 0; i < 4; i++) {
        inverter = numeros[i];
        numeros[i] = numeros[7-i];
        numeros[7-i] = inverter;
    }

    for(i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}

/*
O programa contem um array numeros com 8 elementos e preenche esse array com numeros de 1 a 8, feito no primeiro loop for.

Em seguida inverte a ordem dos elementos do array numeros feito por um segundo loop for que chama a varável inverter que tem como funcionalidade inverter os elementos do array

E ai em seguida após essa inversão de ordem nos elementos do array numeros, um terceiro loop for fica encarregado de imprimir todos os elementos do array numeros de forma inversa, ou seja, de 8 a 1 em ordem decrescente

*/

// Questões resolvidas pela dupla Gustavo Fontes e Dinarte Filho