#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n; // the number of ticket pieces
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        v.push_back(str);
    }

    int cnt = 0;
    for (auto a : v)
    {
        if (a.length() % 2 != 0)
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}