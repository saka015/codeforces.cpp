#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        long long a, b;
        cin >> a >> b;

        long long diff = abs(a - b);

        long long cnt = diff / 10;

        if (diff % 10 != 0)
        {
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
