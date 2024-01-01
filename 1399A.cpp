
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a[55];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        sort(a, a + n);
        vector<int> v;
        int dif = 0;
        for (int i = 1; i < n; i++)
        {
            dif = abs(a[i] - a[i - 1]);
            v.push_back(dif);
        }
        sort(v.begin(), v.end(), greater<int>());
        //        for(int i=0; i<v.size(); i++){
        //            cout<<v[i]<<" ";
        //        }
        //
        //        cout<<endl;
        if (v[0] > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}

// My approach

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     // testcases
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> v;
//         vector<int> ans;

//         for (int i = 0; i < n; i++)
//         {
//             int j;
//             cin >> j;
//             v.push_back(j);
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (v[i + 1] - v[i] == 1 || v[i + 1] - v[i] == 0)
//             {
//                 ans.push_back(1);
//             }
//             else
//             {
//                 ans.push_back(0);
//             }
//         }

//         for (int i = 0; i < ans.size(); i++)
//         {
//             if (ans[i] != 1)
//             {
//                 cout << "NO\n";
//             }
//             else
//             {

//                 cout << "YES\n";
//             }
//         }
//     }

//     return 0;
// }