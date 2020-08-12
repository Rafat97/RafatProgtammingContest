
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

///char to number
///((int)val[0] - 48) + ((int)val[val.length()-1] - 48)

///sort desc order
///sort(total.begin(),total.end(), greater<int>())

/// string contain
///val.find(str1[i]) != string::npos

/// 1+2+3+4+ ... +n
///n(n+1)/2

///MAP iterator CODE
/**
map<ll, ll>::iterator itr;
for(itr = value.begin();itr != value.end();itr++){
            sum+=(*itr).second;
}
*/

///MAP find
///data.find(str) != data.end()

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
    /*
a8
h1

b2
b4
*/
    string s,t;
    cin>>s>>t;
    cout << max(abs(s[0] - t[0]), abs(s[1] - t[1])) << endl;
    while(s != t){
        if(s[0] < t[0] ){
            cout<<"R";
            s[0]++;
        }
        if(s[0] > t[0] ){
            cout<<"L";
            t[0]++;
        }
        if(s[1] >  t[1] ){
            cout<<"D";
            t[1]++;
        }
        if(s[1] <  t[1] ){
            cout<<"U";
            s[1]++;
        }
        cout<<endl;
    }
}


int main()
{
    fastoi ;
    int t=1;
    while(t--)
        solve();

    return 0;
}

