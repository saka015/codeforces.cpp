#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> v;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    sort(v.begin(), v.end());

    int aa = ((v[0] - v[1]) + v[2]) / 2;

    // cout << aa << endl;

    int bb = v[0] - aa;

    int cc = v[1] - bb;

    cout << aa << " " << bb << " " << cc << endl;

    return 0;
}