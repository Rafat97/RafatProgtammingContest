
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

const int MOD = 1000000007;
const int MAX = 1000005;


void solve(){
    ll n,k,e,m,val,sum;
    vector<ll> total;
    cin>>n>>k>>e>>m;
    for(ll i = 0 ;i < n-1;i++){
        sum = 0;
        for(int j = 0;j < e;j++){
            cin>>val;
            sum += val;
        }
        total.push_back(sum);
    }
    ll scor = 0;
    for(int i = 0;i < e-1;i++){
        cin>>val;
        scor += val;
    }
    sort(total.begin(),total.end(), greater<int>());
    ll result = total[k-1] - scor + 1;
    long long answer = max(0LL,result);
    if (answer > m)
        cout << "Impossible" << endl;
    else
        cout << answer << endl;


}


int main()
{
    ll testCase;
    cin>>testCase;
    while(testCase--)
        solve();
    return 0;
}
