/**

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

    ll n,m,val1,val2,val3,maxval = LONG_LONG_MIN ,sum = 0;
    cin>>n;
    vector<ll> data(n+2);
    cin>>m;
    data[0] += 0;
    for(int i = 0 ; i<m ; i++){
        cin>>val1>>val2>>val3;
        data[val1] += val3;
        data[val2+1] -= val3;
    }
    sum = data[0];
    for(int i = 1 ; i < data.size() - 1  ; i++){
        sum += data[i];
        maxval = max(maxval,sum);
    }
    cout<<maxval<<endl;

}
int main()
{
    fastoi ;
    solve();

    return 0;
}


