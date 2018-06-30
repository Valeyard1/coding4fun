#include <iostream>
#include <math.h>
using namespace std;

int main() {
    unsigned long long int quant_char;
    int teste;
    double res;

    cin >> quant_char;
    res = log10(quant_char)/log10(2);

    teste = res*10;

    if((teste % 10) != 0) {
        cout << "-1" << endl;
        return -1;
    }

    cout << res << endl;
    return 0;
}

//log2(32) = x
//10^x = 32
//2^x  = 32
//A AA AAAA AAAAAAAA AAAAAAAAAAAAAAAA
//1 2   4      8            16
