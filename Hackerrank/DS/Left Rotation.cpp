/**
https://www.hackerrank.com/challenges/array-left-rotation/problem
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

const int MOD = 1000000007;
const int MAX = 1000005;

void solve(){
    /// input time solution
    /// for(int i = 0; i < n; i++)cin >> ar[(n-d+i)%n];
    /// for(int i = 0; i < n; i++)cout << ar[i] << " ";

    ll n,q,a,temp;

    cin>>n>>q;
    vector<ll> val(n);
    vector<ll> ans(n);
    for(int i = 0 ; i < n; i++){
        cin>>val[i];
    }
    int center = n-1-q;
    ans[center] = val[n-1];
    int j = 0;
    for(int i = center+1 ; i < n; i++){
        ans[i] = val[j++];
    }

    for(int i = 0 ; i < center; i++){
        ans[i] = val[j++];
    }
    for(int i = 0 ; i < n; i++){
        cout<<ans[i]<<" ";
    }
}


int main()
{
    fastoi ;
    solve();

    return 0;
}


