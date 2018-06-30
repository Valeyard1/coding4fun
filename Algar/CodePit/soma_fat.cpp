/*
 *
 * Leia dois valores inteiros M e N indefinidamente. A cada leitura, calcule e escreva a soma dos fatoriais de cada um dos valores lidos. Utilize uma variável apropriada, pois cálculo pode resultar em um  * valor com mais de 15 dígitos.
 *
 * Entrada
 * O arquivo de entrada contém vários casos de teste. Cada caso contém dois números inteiros M (0 ≤ M ≤ 20) e N (0 ≤ N ≤ 20). O fim da entrada é determinado por eof.
 *
 * Saída
 * Para cada caso de teste de entrada, seu programa deve imprimir uma única linha, contendo um número que é a soma de ambos os fatoriais (de M e N).
 */

#include <bits/stdc++.h>

using namespace std;
long long int fat(long long int res){

	if(res == 0)
		return 1;
	return res * fat(res - 1);
}
int main(){

	int input1, input2;
	long long int res = 0;

	while(cin >> input1 >> input2){
        res= fat(input1) + fat(input2);
		cout << res << endl;
    }

	return 0;

}
