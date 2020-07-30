/**
https://www.codechef.com/problems/RPD
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

ll productSumFun(ll value){
    ll sum =0;
    while(value){
        sum += value%10;
        value /= 10;
    }
    return sum;
}

void solve(){
    ll n,val, maxSum = 0;
    vector<ll> number;
    vector<ll> productSum;
    cin>>n;
    for(ll i = 0; i<n;i++){
        cin>>val;
        number.push_back(val);
    }
    for(ll i = 0 ;i<number.size();i++){
        for(ll j = i + 1 ; j < number.size() ;j++){
            val = number[i] * number[j];
            maxSum = max(maxSum , productSumFun(val));
        }
    }
    cout<<maxSum<<endl;
}


int main()
{
    fastoi ;
    int testCase;
    cin>>testCase;
    while(testCase--)
        solve();

    return 0;
}

