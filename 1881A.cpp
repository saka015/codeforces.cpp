#include <iostream>
#include <string>

using namespace std;

int minOperationsToSubstring(string x, string s)
{
    int operations = 0;
    while (x.find(s) == string::npos)
    {
        x += x;
        operations++;
        if (x.length() > 25)
        {
            return -1; // If it's not possible, return -1
        }
    }
    return operations;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int result = minOperationsToSubstring(x, s);
        cout << result << endl;
    }

    return 0;
}
