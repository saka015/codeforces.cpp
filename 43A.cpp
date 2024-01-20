#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> goals; // Using a map to store team names and their goal count

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        // Increment the goal count for the corresponding team
        goals[s]++;
    }

    // Find the team with the maximum goal count
    string winner;
    int maxGoals = 0;

    for (const auto &team : goals)
    {
        if (team.second > maxGoals)
        {
            maxGoals = team.second;
            winner = team.first;
        }
    }

    cout << winner << endl;

    return 0;
}
