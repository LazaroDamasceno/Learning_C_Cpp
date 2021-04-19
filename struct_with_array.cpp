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
        cout << "Informe uma nota\n";
        cin >> estudante.notas[i];
        cout << "Informe um peso de nota\n";
        cin >> estudante.pesos[i];
    }
    for(int i=0; i<10; ++i)
    {
        cout << "A nota final do aluno eh: " <<
        estudante.notas[i]*estudante.pesos[i] << endl;
    }
}
