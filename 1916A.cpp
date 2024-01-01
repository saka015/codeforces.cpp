#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string find_removed_elements(const vector<int> &b, int n, int k)
{
    int product_b = 1;
    for (int num : b)
    {
        product_b *= num;
    }

    int original_product = 2023;
    int missing_product = original_product / product_b;

    // Check if missing_product is divisible by 2023
    if (missing_product == 0 || original_product % missing_product != 0)
    {
        return "NO";
    }

    // Find factors of missing_product
    vector<int> factors;
    for (int i = 1; i <= missing_product; ++i)
    {
        if (missing_product % i == 0)
        {
            factors.push_back(i);
        }
    }

    // Find a combination of k factors that sum to missing_product
    sort(factors.begin(), factors.end()); // Sort for efficient combinations
    do
    {
        if (accumulate(factors.begin(), factors.begin() + k, 0) == missing_product)
        {
            string result = "YES\n";
            for (int i = 0; i < k; ++i)
            {
                result += to_string(factors[i]) + " ";
            }
            return result;
        }
    } while (next_permutation(factors.begin(), factors.end()));

    return "NO";
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;

        vector<int> b(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> b[j];
        }

        cout << find_removed_elements(b, n, k) << endl;
    }

    return 0;
}
