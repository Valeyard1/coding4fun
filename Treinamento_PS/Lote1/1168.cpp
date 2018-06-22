#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casos = 0, conta_led = 0;
    char input[101];

    cin >> casos;

    for(int i = 0;i < casos;i++)
    {
        conta_led = 0;
        cin >> input;
        for(int j = 0;j < strlen(input);j++)
        {
            switch(input[j])
            {
                case '0': conta_led += 6; break;
                case '1': conta_led += 2; break;
                case '2': conta_led += 5; break;
                case '3': conta_led += 5; break;
                case '4': conta_led += 4; break;
                case '5': conta_led += 5; break;
                case '6': conta_led += 6; break;
                case '7': conta_led += 3; break;
                case '8': conta_led += 7; break;
                case '9': conta_led += 6; break;
            }
        }
        cout << conta_led << " leds" << endl;
    }
    return 0;
}
