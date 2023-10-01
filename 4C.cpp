// enter n
// takes n string input
// create a map , if string doesn't exists : OK
// else `string_name{cnt}`

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    unordered_map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string username;
        cin >> username;

        if (mp.find(username) == mp.end())
        {
            mp[username] = 1; // cnt ++
            cout << "OK" << endl;
        }
        else
        {
            int temp = mp[username]; // freq of username
            while (mp.find(username + to_string(temp)) != mp.end())
            {
                temp++;
            }

            mp[username]++;
            cout << username + to_string(temp) << endl;
        }
    }

    return 0;
}