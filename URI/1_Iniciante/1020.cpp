#include <iostream>
using namespace std;

#define ANO 365
#define MES 30
int main()
{
    int idade, anos, dias;
    int res_meses, restantes, res_dias;

    cin >> idade;

    anos = idade / ANO;
    cout << anos << " ano(s)" << endl;

    dias = ANO * anos;
    res_meses = (idade - dias);
    cout << res_meses / MES << " mes(es)" << endl;

    restantes = MES * (res_meses / MES);
    res_dias = res_meses - restantes;
    cout << res_dias << " dia(s)" << endl;
    return 0;
}
