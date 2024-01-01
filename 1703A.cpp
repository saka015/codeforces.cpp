#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        string s2 = "yes";
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int x = s.compare(s2);

        if (x == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}