#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m;
    cin >> m;
    int from[m], to[m];
    for (int i = 0; i < m; i++)
        cin >> from[i];

    for (int i = 0; i < m; i++)
        cin >> to[i];

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]] = 1;
    }

    for (int i = 0; i < m; i++)
    {
        if (mp.find(from[i]) != mp.end())
        {
            mp[from[i]] = 0;
        }
        mp[to[i]] = 1;
    }
    vector<int>ans;
    for (auto x : mp)
    {
        if (x.second == 1)
            cout << x.first << " ";
    }
    cout << endl;
}