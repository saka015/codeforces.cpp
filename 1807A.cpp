#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int a, b, c;
    cin >> a >> b >> c;

    if ((a + b) == c)
    {
        cout << "+" << endl;
    }
    else if ((a - b) == c)
    {
        cout << "-" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
}