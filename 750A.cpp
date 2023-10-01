#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    int rem = 240 - k;
    int Ptime = 0;
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {

        Ptime += 5 * i;

        if (Ptime > rem)
        {
            break;
        }

        cnt++;
    }

    cout << cnt << endl;
    return 0;
}