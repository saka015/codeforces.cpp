#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }

    sort(a.begin(), a.end(), greater<int>());
    int max = a[0];
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res += (max - a[i]);
    }

    cout << res << endl;
    return 0;
}