#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long n)
{
    long long root = sqrt(n);
    return root * root == n;
}

bool isPrime(long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long t;
        cin >> t;

        if (isPerfectSquare(t) && isPrime(sqrt(t)))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
