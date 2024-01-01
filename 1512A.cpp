#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }

        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }

        int just;

        for (auto element : mp)
        {
            if (element.second == 1)
            {
                just = element.first;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == just)
            {
                cout << i + 1 << endl;
            }
        }
    }

    return 0;
}
