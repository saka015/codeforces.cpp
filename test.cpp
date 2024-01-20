#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Troop
{
    int damage, size, category;
};

// Function to compare troops for sorting by damage per size
bool compareTroops(const Troop &a, const Troop &b)
{
    return (double)a.damage / a.size > (double)b.damage / b.size;
}

int main()
{
    int n;
    cin >> n;

    vector<Troop> troops(n);
    for (int i = 0; i < n; i++)
    {
        cin >> troops[i].damage >> troops[i].size >> troops[i].category;
    }

    int barrackSize;
    cin >> barrackSize;

    // Sort troops by damage per size for efficiency
    sort(troops.begin(), troops.end(), compareTroops);

    vector<bool> categoriesUsed(21, false); // Assuming max 20 categories
    int maxDamage = 0, currentSize = 0;

    for (const Troop &troop : troops)
    {
        if (!categoriesUsed[troop.category] && currentSize + troop.size <= barrackSize)
        {
            categoriesUsed[troop.category] = true;
            maxDamage += troop.damage;
            currentSize += troop.size;
        }
    }

    cout << maxDamage << endl;

    return 0;
}
