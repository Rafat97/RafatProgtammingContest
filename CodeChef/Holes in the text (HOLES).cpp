/**
https://www.codechef.com/problems/HOLES
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
    ll cnt = 0;
    string val;
    cin>>val;
    for(int i = 0 ;i < val.length(); i++){
        if(val[i] == 'A' || val[i] == 'D' || val[i] == 'O' || val[i] == 'P' || val[i] == 'R' || val[i] == 'Q')
            cnt++;
        else if(val[i] == 'B')
            cnt += 2;
    }
    cout<<cnt<<endl;
}


int main()
{
    fastoi ;
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}


/**
https://www.codechef.com/LTIME86B/problems/CHEFSTEP
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
    ll cnt = 0;
    string val;
    cin>>val;
    for(int i = 0 ;i < val.length(); i++){
        if(val[i] == 'A' || val[i] == 'D' || val[i] == 'O' || val[i] == 'P' || val[i] == 'R' || val[i] == 'Q')
            cnt++;
        else if(val[i] == 'B')
            cnt += 2;
    }
    cout<<cnt<<endl;
}


int main()
{
    fastoi ;
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}


