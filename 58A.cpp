#include <bits/stdc++.h>
using  namespace std;

int main(){

    string s;
    cin>>s;


    int j=0,cnt=0;


    //create a string "hello"

    string match="hello";

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==match[j])
        {
            j++;
            cnt++;

            if(cnt==5)
            {
                break;
            }
        }

        
    }

    if(cnt==5)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    
   return 0;
}