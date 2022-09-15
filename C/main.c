#include <stdio.h>
#include "ponto.h"

int main(){
    PONTO* a = ponto_criar(1,0,1);
    PONTO* b = ponto_criar(1,1,1);

    PONTO* c = ponto_somar(a,b);
    printf("x,\ty,\tz,\th\n");
    ponto_printar(a);
    printf(" + \n");
    ponto_printar(b);
    printf(" = \n");
    ponto_printar(c);

    printf("\n\n");

    MATRIZ* m1 = matriz_criar(4);
    matriz_printar(m1);

    return 0;

}
