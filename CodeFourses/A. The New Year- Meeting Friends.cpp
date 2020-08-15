/**
URL : https://codeforces.com/problemset/problem/723/A
*/
#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define fastoi  ios::sync_with_stdio(0); cin.tie(0);
#define printNPrecision(afterDigit,value) cout << fixed << setprecision(12) << value <<endl;
#define llu unsigned long long
#define lld long long
#define U unsigned int


#define LSOne(S) (S & (-S))
#define isBitSet(S, i) ((S >> i) & 1)

void solve(){
    int val,maxVal = INT_MIN , minVal = INT_MAX;
    vector<int> data;
    for(int i = 0 ; i < 3 ; i++){
        cin>>val;
        maxVal = max(val,maxVal);
        minVal = min(val , minVal);
    }
    cout<<maxVal - minVal<<endl;
}


int main()
{
    fastoi ;
    int t = 1;
    while(t--)
        solve();

    return 0;
}
