#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cout << 500 - i << ' ';
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}
