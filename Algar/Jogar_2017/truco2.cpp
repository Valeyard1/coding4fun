#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned long int jog1[3], jog2[3];
    int contador_jog2 = 0, contador_jog1 = 0, empate = 0;

    for(int i = 0;i < 3;i++)
        cin >> jog1[i];

    for(int i = 0;i < 3;i++)
        cin >> jog2[i];

    for(int i = 0;i < 3;i++) {
        if(jog2[i] > jog1[i])
            contador_jog2++;
        if(jog2[i] == jog1[i])
            empate++;
        if(jog2[i] < jog2[i])
            contador_jog1++;
    }

    if(contador_jog2 == 3)
        cout << "J2" << endl;
    if(empate == 3 || contador_jog2 < 3 || contador_jog1 < 3)
        cout << "E" << endl;
    if(contador_jog1 == 3)
        cout << "J1" << endl;

    return 0;
}
