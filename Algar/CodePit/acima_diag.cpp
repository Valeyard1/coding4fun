/*
 * Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima * da diagonal principal da matriz, conforme ilustrado abaixo (área verde).
 *
 * Entrada:
 * A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto  * flutuante que compõem a matriz.
 *
 * Saída:
 * Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.
 *
 */


#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

float sum(float matriz[12][12])
{
    float soma = 0;
    for(int i = 0;i < 12;i++)
        for(int j = 0;j < 12;j++)
            soma += matriz[i][j];
    return soma;
}

int main()
{
    float m[12][12];
    float soma = 0;

    char ch = getchar();

    for(int i = 0;i < 12;i++)
        for(int j = 0;j < 12;j++)
            cin >> m[i][j];

    soma = sum(m);
    if(ch == 'S')
        cout << fixed << setprecision(1) << soma << endl;

    if(ch == 'M')
        cout << fixed << setprecision(1) << soma/60.0 << endl;

    return 0;
}
