
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

ll lcm(ll a, ll b)
{
    return (a*b)/__gcd(a, b);
}

/**
#ifndef ONLINE_JUDGE
freopen("D:/Competitive/inputf.in","r",stdin);
freopen("D:/Competitive/outputf.in","w",stdout);
#endif
*/

///sort desc order
///sort(total.begin(),total.end(), greater<int>())

///MAP iterator CODE
/**
map<ll, ll>::iterator itr;
for(itr = value.begin();itr != value.end();itr++){
            sum+=(*itr).second;
}
*/


unsigned countWords(char *str)
{
    int state = 0;
    unsigned wc = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
            state = 0;
        else if (state == 0)
        {
            state = 1;
            ++wc;
        }
        ++str;
    }
    return wc;
}


void solve(){
}


int main()
{
    fastoi ;

    return 0;
}
