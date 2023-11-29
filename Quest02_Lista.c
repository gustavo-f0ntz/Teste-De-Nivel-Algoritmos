# include <stdio.h>
int f (int mat [3][3]) {
return ( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + (
mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat
[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
}

int main ( void ) {
int m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}};
int de = f ( m ) ;
printf (" Resultado = \t %d", de);
return 0;
}

/*
Este programa calcula o determinante de uma matriz 3x3. A função f recebe uma matriz 3x3 (3 linhas e 3 colunas) como parâmetro e retorna no final o valor do determinante dessa matriz.

Nesse programa a matriz m é definida como:

    0 1 0
    3 1 -1
    4 0 1
    
    O determinante é calculado da seguinte forma na operação:
    
    det(m) = (0*1*1) + (1*-1*4) + (0*3*0) - (1*1*1) - (0*-1*0) - (0*1*4)
       = -4 - 1
       = -5

    Então ao fim da execução o programa imprime o resultado que no caso é " Resultado = -5"

    */
 
 // Questões resolvidas pela dupla Gustavo Fontes e Dinarte Filho