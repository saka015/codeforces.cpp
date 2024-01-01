#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;

        cin >> a >> b >> c >> d;

        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);

        int cnt = 0;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] > a)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}