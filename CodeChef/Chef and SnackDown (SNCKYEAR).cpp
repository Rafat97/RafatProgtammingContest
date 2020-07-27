/**
Url : https://www.codechef.com/problems/SNCKYEAR
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


void solve(){
    ll year;
    cin>>year;

    if(year == 2010 || year == 2015 || year == 2016 || year == 2017 || year == 2019 )
        cout<<"HOSTED"<<endl;
    else
        cout<<"NOT HOSTED"<<endl;

}


int main()
{
    fastoi ;
    int testCase;cin>>testCase;
    while(testCase--)
        solve();

    return 0;
}
