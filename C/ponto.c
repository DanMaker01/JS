#include "ponto.h"
#include <stdlib.h>


struct ponto_4d{
    int n; /*FAZER*/
    float x,y,z,h;
};


PONTO* ponto_criar(float x, float y, float z){
    PONTO* p = malloc(sizeof(PONTO));
    if(p!= NULL){
        p->x = x;
        p->y = y;
        p->z = z;
        p->h = 1;

        return p;
    }
    else
        return NULL;
}
PONTO* ponto_clonar(PONTO* p){
    if(p!=NULL){
        PONTO* q = ponto_criar(p->x, p->y, p->z);
        return q;
    }
    else
        return NULL;
}
PONTO* ponto_somar(PONTO* a, PONTO* b){
    if(a!=NULL & b!= NULL){
        PONTO* p = ponto_criar(a->x+b->x, a->y+b->y, a->z+b->z);
        return p;
    }
    else
        return NULL;
}
PONTO* ponto_escalar(float s, PONTO* p){
    if(p!=NULL){
        PONTO* r = ponto_clonar(p);
        r->x = p->x*s;
        r->y = p->y*s;
        r->z = p->z*s;
        return r;
    }
    else
        return NULL;
}
PONTO* ponto_descriar(PONTO* p){
    if(p!=NULL){
        free(p);
        return NULL;
    }
    else
        return ERRO;
}

void ponto_printar(PONTO* p){
    if(p!=NULL){
        printf("%.5f, %.5f, %.5f %.5f\n",p->x,p->y,p->z,p->h);
    }
    else
        printf("ERRO, nao conseguiu printar ponto");
}


///////////////////////////////////////////////////////////////

struct matriz_4d{
    float** valor;
    int n;
};

MATRIZ* matriz_criar(int n){
    MATRIZ* m = malloc(sizeof(MATRIZ));
    if(m!=NULL){
        int i;
        int j;

        //reservar espaço para as linhas e colunas
        float** valores = malloc(n*sizeof(float*));
        for(i=0;i<n;i++){
            valores[i] = malloc(n*sizeof(float));
        }
        m->valor = valores;

        //agora preencher com a matriz identidade
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i==j)
                    m->valor[i][j] = 1;
                else
                    m->valor[i][j] = 0;
            }
        }
        m->n = n;
        return m;
    }
    else
        return NULL;
}
MATRIZ* matriz_clonar(int n);
MATRIZ* matriz_compor(MATRIZ* m1, MATRIZ* m2);
PONTO* matriz_multiplicar(MATRIZ* m, PONTO* p){
    if(m!=NULL && P!=NULL){
        if(m->n == p->n){
            x1 = p->x * m->valor[0][0];
            x2;
            x3;
            PONTO* novo = ponto_criar()
        }
        else{
            return ERRO;
        }
    }
    else
        return NULL;
}
MATRIZ* matriz_alterar(MATRIZ* m, int pos_x, int pos_y, float valor);
void matriz_printar(MATRIZ* m){
    if(m!= NULL){
        int n = m->n;

        int i, j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%.5f\t",m->valor[i][j]);
            }
            printf("\n");
        }
    }
}
