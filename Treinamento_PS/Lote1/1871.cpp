#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char **argv)
{
    char buffer[10];
    unsigned long int num1 = 0, num2 = 0, soma = 0;

    while(cin >> num1 >> num2) {
        if((num1 == 0) && (num2 == 0))
            break;
        soma = num1 + num2;
        /* Converte a soma pra string */
        sprintf(buffer, "%ld", soma);

        /*
        cout << "Soma com o 0: " << buffer << endl;

        // Isso verifica se o tipo da variavel `buffer` é string ou nao
        cout << "O tipo da variavel soma eh: ";
        cout << _Generic(buffer, char *: "string", default: "nao sei") << endl;

         */

        for(unsigned int i = 0, pos = 0;i < strlen(buffer); i++, pos++) {
            if(buffer[i] == '0')
                pos++;
            buffer[i] = buffer[pos];
        }

        cout << buffer << endl;

    }
    return 0;
}
