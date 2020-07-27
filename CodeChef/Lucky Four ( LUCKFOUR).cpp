
/***
URL : https://www.codechef.com/problems/LUCKFOUR
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
    string value;
    ll cnt = 0;
    cin>>value;
    for(int i = 0;i<value.length() ; i++){
        if(value[i] == '4')
            cnt++;
    }
    cout<<cnt<<endl;

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

