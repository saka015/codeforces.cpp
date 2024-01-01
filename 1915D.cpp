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
        string s;
        cin >> s;

        string ans;
        ans.push_back(s[0]);

        for (int i = 1; i < n; i++)
        {
            if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') &&
                (s[i - 1] == 'a' || s[i - 1] == 'e' || s[i - 1] == 'i' || s[i - 1] == 'o' || s[i - 1] == 'u'))
            {
                ans.push_back('.');
            }
            ans.push_back(s[i]);
        }

        cout << ans << endl;
    }

    return 0;
}
