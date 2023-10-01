#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int minm = min(x1, min(x2, x3));
    int maxm = max(x1, max(x2, x3));

    cout << maxm - minm << endl;

    return 0;
}