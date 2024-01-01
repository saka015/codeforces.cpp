#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> priorities(n);
    for (int i = 0; i < n; i++)
    {
        cin >> priorities[i];
    }

    int k;
    cin >> k;

    priority_queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
        q.push(make_pair(-priorities[i], i));
    }

    int pos = 1;

    while (true)
    {
        pair<int, int> currentOrder = q.top();
        q.pop();

        if (currentOrder.second == k)
        {
            break;
        }

        for (int i = 0; i < n; i++)
        {
            if (i != currentOrder.second)
            {
                q.push(make_pair(q.top().first + 1, q.top().second));
                q.pop();
            }
        }

        pos++;
    }

    cout << pos << endl;

    return 0;
}