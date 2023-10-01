#include <bits/stdc++.h>
using  namespace std;

int main(){

    int n;
    cin>>n;

    int arr[5] = {100 , 20 , 10 , 5 , 1};
    int ptr = 0;
    int cnt = 0;

    for(int i=0;i<5;i++)
    {
        while(n > 0)
        {
            if(n >= arr[ptr])
        {
            n=n - arr[ptr];
            cnt++;
        }else{
            ptr++;
        }
        }
    }
    cout<<cnt<<endl;
   return 0;
}