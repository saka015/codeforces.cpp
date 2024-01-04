#include <iostream>

using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {
        long long N, X, Y;
        cin >> N >> X >> Y;

        if (X >= 2 * N)
        {
            cout << "YES" << endl;
            continue;
        }

        long long leavesWith1Large3Small = min(N, Y / 3);
        long long remainingLeaves = N - leavesWith1Large3Small;

        if (2 * remainingLeaves <= X && (Y - 3 * leavesWith1Large3Small) + 2 * remainingLeaves <= X)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
