#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 656;

    if (palindrome(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}