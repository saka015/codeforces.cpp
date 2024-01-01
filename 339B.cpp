#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
    }

    int currentPosition = 1;
    long long totalTime = 0;

    for (int i = 0; i < m; ++i)
    {
        int distance = (a[i] >= currentPosition) ? a[i] - currentPosition : n - currentPosition + a[i];

        totalTime += distance;

        currentPosition = a[i];
    }

    cout << totalTime << endl;

    return 0;
}
