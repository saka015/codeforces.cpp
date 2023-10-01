#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}


















// #include <bits/stdc++.h>
// using  namespace std;

// int main(){

//     int n,k;

//     cin>>n>>k;

//     vector<long> v;

    
// //odd fill
//     for(int i=0;i<n;i++)
//     {
//         if(i%2 !=0)
//         {
//             v.push_back(i);
//         }
//     }

// //even fill
//     for(int i=2;i<n;i++)
//     {
//         if(i%2 ==0)
//         {
//             v.push_back(i);
//         }
//     }
// // for(int i=0;i<=n;i++)
// //     {
// //         cout<<v[i]<<endl;
// //     }

//     cout<<v[k-1]<<endl;

//    return 0;
// }