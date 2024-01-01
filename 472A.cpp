#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << 8 << endl;
        cout << n - 8 << endl;
    }
    else
    {

        if (n % 2 != 0)
        {
            cout << 9 << endl;
            cout << n - 9 << endl;
        }
    }

    return 0;
}