#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x;
    cin >> x;

    vector<int> v;

    while (x)
    {
        int temp = x % 10;
        v.push_back(temp);
        x /= 10;
    }

    for (int i = 0; i < v.size();i++)
    {
        if(v[0]==9 || 9-v[i] > v[i+1])
        {
            break; 
        }
    }

    return 0;
}