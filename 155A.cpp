/*
i/p :5
     100 50 200 150 200
o/p : 2
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;

    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            cnt++;
        }
        else
        {
            if (min > arr[i])
            {
                min = arr[i];
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}