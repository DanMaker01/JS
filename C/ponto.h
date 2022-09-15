#ifndef PONTO_
#define PONTO_
#define ERRO -111

////////////////////////////////////////////////
typedef struct ponto_4d PONTO; /*MUDAR PARA GENÉRICO*/


PONTO* ponto_criar(float x, float y, float z); /*MUDAR PARA GENERICO*/
PONTO* ponto_somar(PONTO* a, PONTO* b);
PONTO* ponto_escalar(float s, PONTO* p);
PONTO* ponto_descriar(PONTO* p);
float ponto_valor(int indice);/*fazer*/ /*MUDAR PARA GENERICO*/
void ponto_printar(PONTO* p);

////////////////////////////////////////////////
typedef struct matriz_4d MATRIZ; //não esparsa

MATRIZ* matriz_criar(int n);
MATRIZ* matriz_clonar(int n);
MATRIZ* matriz_compor(MATRIZ* m1, MATRIZ* m2);
PONTO* matriz_multiplicar(MATRIZ* m, PONTO* p);
MATRIZ* matriz_alterar(MATRIZ* m, int pos_x, int pos_y, float valor);
void matriz_printar(MATRIZ* m);

////////////////////////////////////////////////

#endif // PONTO_
