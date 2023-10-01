// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int s, n;
//     cin >> s >> n;

//     int cnt = 0;
//     int x[n];
//     int y[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> x[i] >> y[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (s <= x[i])
//         {
//             cout << "NO" << endl;
//             break;
//         }
//         else
//         {
//             if (s > x[i])
//             {
//                 s += y[i];
//                 cnt++;
//             }
//         }
//     }

//     if (cnt == n)
//     {

//         cout << "YES" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define mem(array, num) memset(array, num, sizeof(array))
using namespace std;
int main()
{
    long int x, c, i, j, s, n, array, num;
    pair<int, int> a[1000];
    while (cin >> s >> n)
    {
        c = 1;
        for (i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        sort(a, a + n);
        for (i = 0; i < n; i++)
        {
            if (s <= a[i].first)
            {
                c = 0;
                break;
            }
            else
            {
                s = s + a[i].second;
            }
        }
        if (c == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}