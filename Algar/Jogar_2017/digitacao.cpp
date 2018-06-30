#include <iostream>
using namespace std;

int main()
{
    unsigned int speed;

    cin >> speed;

    if(speed < 40)
        cout << "devagar" << endl;
    else if(speed >= 40 && speed <= 80)
        cout << "mediano" << endl;
    else if(speed > 80 && speed <= 160)
        cout << "veloz" << endl;
    else if(speed > 160)
        cout << "inexistente" << endl;

    return 0;
}
