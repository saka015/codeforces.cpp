#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int size = 1; // minimum size is 1, as a single element is also an increasing subarray
    int mx = 1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] > v[i - 1])
        {
            size++;
        }
        else
        {
            size = 1; // reset the size for a new increasing subarray
        }

        mx = max(mx, size);
    }

    cout << mx << endl;

    return 0;
}
