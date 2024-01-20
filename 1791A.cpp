#include <bits/stdc++.h>
using namespace std;

void solve()
{

    char c;
    cin >> c;

    string s = "codeforces";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != c)
        {
            continue;
        }
        else
        {

            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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