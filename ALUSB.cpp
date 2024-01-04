#include <bits/stdc++.h>
using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    // Your solution code goes here
    int n;
    cin >> n;

    vector<int> v1;
    vector<int> v2;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v1.push_back(t);
    }

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v2.push_back(t);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        ans.push_back(v1[i] + v2[i]);
    }
    bool flag = true;

    sort(ans.begin(), ans.end());

    if (ans[0] != ans[n - 1])
    {

        flag = false;
    }

    if (flag == false)
    {
        cout << -1 << endl;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            cout << v1[i] << " ";
        }

        cout << endl;

        for (int i = 0; i < n; i++)
        {
            cout << v2[i] << " ";
        }
    }

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
}