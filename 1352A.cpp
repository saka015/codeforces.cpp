#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        int n;
        cin >> n;
        vector<int> ans; // Create a vector to store round numbers for the current test case

        int temp = 1; // Initialize temp as 1 (representing the rightmost digit)
        while (n > 0)
        {
            int digit = n % 10; // Get the rightmost digit of n

            if (digit != 0)
            {
                ans.push_back(digit * temp); // Create a round number and add it to the vector
            }

            n /= 10;    // Remove the rightmost digit from n
            temp *= 10; // Update temp to represent the next position
        }

        cout << ans.size() << endl; // Print the number of round numbers in the sum
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " "; // Print the round numbers separated by space
        }
        cout << endl;
    }

    return 0;
}
