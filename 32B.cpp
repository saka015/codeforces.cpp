#include <iostream>
using namespace std;

int main()
{
    string borzeCode;
    cin >> borzeCode;

    string ternaryNumber = "";
    for (int i = 0; i < borzeCode.size();)
    {
        if (borzeCode[i] == '.')
        {
            ternaryNumber += '0';
            i++;
        }
        else if (borzeCode[i] == '-' && borzeCode[i + 1] == '.')
        {
            ternaryNumber += '1';
            i += 2;
        }
        else if (borzeCode[i] == '-' && borzeCode[i + 1] == '-')
        {
            ternaryNumber += '2';
            i += 2;
        }
    }

    cout << ternaryNumber << endl;

    return 0;
}
