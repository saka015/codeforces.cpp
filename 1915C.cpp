#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            sum += static_cast<long long>(t);
        }

        if (ceil(sqrt(static_cast<double>(sum))) == floor(sqrt(static_cast<double>(sum))))
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
