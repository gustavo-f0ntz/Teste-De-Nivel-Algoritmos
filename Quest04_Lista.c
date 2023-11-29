#include <stdio.h>

int soma(int numero1, int numero2){
    return numero1 + numero2;
}

int main(){
    int numero1, numero2;
    printf("Digite um primeiro numero:");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf(" O resultado da soma: %d", soma(numero1, numero2));
}


// Questões resolvidas pela dupla Gustavo Fontes e Dinarte Filho