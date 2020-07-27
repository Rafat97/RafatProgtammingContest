/***
Not Solved properly
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

const int MOD = 1000000007;
const int MAX = 1000005;

///sort desc order
///sort(total.begin(),total.end(), greater<int>())
ll lcm(ll a, ll b)
{
    return (a*b)/__gcd(a, b);
}


void solve(){


    ll n,a,b,k,cnt = 0;
    cin>>n>>a>>b>>k;

    cout<<__gcd(a, b);

    return ;
    for(int i = 1; i < n;i++){
        if(i%a == 0 && i%b != 0)
            cnt++;
        if(i%a != 0 && i%b == 0)
            cnt++;
    }
    if(cnt>=k)
        cout<<"Win"<<endl;
    else
        cout<<"Loss"<<endl;
}



int main()
{
    fastoi;

    ll testCase;
    cin>>testCase;
    while(testCase--)
        solve();
    return 0;
}

