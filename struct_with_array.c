#include <stdio.h>

struct aluno
{
    long long matricula;
    int notas[10];
    int pesos[10];
    int qtd_notas;
};

int main(void)
{
    struct aluno estudante;
    for(int i=0; i<10; ++i)
    {
        printf("Informe uma nota\n");
        scanf("%d", &estudante.notas[i]);
        printf("Informe um peso de nota\n");
        scanf("%d", &estudante.pesos[i]);
    }
    for(int i=0; i<10; ++i)
    {
        printf("A nota final do aluno eh: %d.\n",
               estudante.notas[i]*estudante.pesos[i]);
    }
}
