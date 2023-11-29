#include <stdio.h> 
int main() {
    int i;
    for (i =1 ; i<=100 ; i*=100) {
        if (i==30) {
            break;
        }
        else {
            printf ("%2d\n", 2*i);
        }
    }
    printf("Fim do laco!\n");
    return 0;

}

/* 

O programa ele imprime o dobro do valor de i verificando e modificando o valor de i enquanto o i for menor ou igual a 100. O valor de i ele é multiplicado por 100 a cada nova iteração no loop. Só que a condição estabelecida como parabetro que é i == 30 ela nunca vai ser verdadeira, pois i vai de 1 para 100 ja na primeira iteração. Sendo assim o loop for é executado só uma vez, sendo a saída do programa o seguinte resultado: 

2
Fim do laco!

*/


// Questões resolvidas pela dupla Gustavo Fontes e Dinarte Filho