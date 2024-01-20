#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ans(n);

    if ((n / 2) % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                ans.push_back(i);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                ans.push_back(i);
            }
        }

        for (int i = 0; i < n; i++)
        {

            cout << ans[i] << " ";
        }
        cout << endl;
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

