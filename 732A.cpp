#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k, r;
    cin >> k >> r;

    int i = 1;

    while (1 > 0)
    {
        if ((k * i) % 10 == 0 || ((k * i) - r) % 10 == 0)
        {
            cout << i << endl;
            break;
        }
        else
        {
            i++;
        }
    }

    return 0;
}