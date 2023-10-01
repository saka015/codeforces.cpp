#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int a, b, c, exp3, exp4, exp1, exp2;

    while (cin >> a >> b >> c)
    {

        exp3 = a + b * c;
        exp4 = a * (b + c);
        exp1 = a * b * c;
        exp2 = (a + b) * c;

        int maxi1 = max(exp1, exp2);
        int maxi2 = max(exp3, exp4);

        int maxi3 = max(maxi1 ,maxi2);
        int exp5 = a+b+c;


        cout << max(exp5, maxi3) << endl;
    }

    return 0;
}