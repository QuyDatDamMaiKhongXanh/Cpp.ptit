#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            mp[tmp] = 1;
        }
        for (int i = 0; i < m; i++)
        {
            int tmp;
            cin >> tmp;
            if (mp[tmp] == 1)
            {
                mp[tmp] = 2;
            }
            else if (mp[tmp] == 0)
            {
                mp[tmp] = 1;
            }
        }
        for (auto &&i : mp)
        {
            cout << i.first << ' ';
        }
        cout << endl;
        for (auto &&i : mp)
        {
            if (i.second == 2)
            {
                cout << i.first << ' ';
            }
        }
        cout << endl;
    }
}
