#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     cin >> n; // no. of shops in the city

//     vector<int> x(n);

//     for (auto &nums : x)
//     {
//         cin >> nums;
//     }

//     int q;
//     cin >> q;

//     vector<int> m(q);

//     for (auto &nums : m)
//     {
//         cin >> nums;
//     }

//     for (int i = 0; i < q; i++)
//     {
//         int cnt = 0; // Reset cnt for each query day
//         for (int j = 0; j < n; j++)
//         {
//             if (m[i] >= x[j])
//             {
//                 cnt++;
//             }
//         }
//         cout << cnt << endl;
//     }
// }

/*The above solution is giving TLE*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n; // no. of shops in the city

    vector<int> x(n);

    for (auto &nums : x)
    {
        cin >> nums;
    }

    sort(x.begin(), x.end()); // Sort the prices in ascending order

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int m;
        cin >> m;

        // Use binary search to find the position of the maximum price Vasiliy can afford
        int low = 0, high = n - 1;
        int cnt = 0;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (x[mid] <= m)
            {
                cnt = mid + 1; // Increment count and search in the right half
                low = mid + 1;
            }
            else
            {
                high = mid - 1; // Search in the left half
            }
        }

        cout << cnt << endl;
    }

    return 0;
}