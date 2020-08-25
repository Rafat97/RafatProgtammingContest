
#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define fastoi  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define printNPrecision(afterDigit,value) cout << fixed << setprecision(12) << value <<endl;
#define llu unsigned long long
#define lld long long
#define U unsigned int


#define LSOne(S) (S & (-S))
#define isBitSet(S, i) ((S >> i) & 1)

const int MOD = 1000000007;
const int MAX = 1000005;

void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";
}

ll lcm(ll a, ll b)
{
    return (a*b)/__gcd(a, b);
}
ll gcd(ll a, ll b)
{
    if(a < b)
        return gcd(b, a);
    else if(a%b == 0)
        return b;
    else return gcd(b, a%b);
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
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

///string to long
// stringstream data(str);
// data >> ans;
/// or
//stol(str);



//Upper_bound   auto x=upper_bound(v[a].begin(),v[a].end(),les);les=*x; if(x==v[a].end())break;
//ll int LCM(ll int a,ll int b) { ll int gcd=__gcd(a,b);ll int lcm=a*b/gcd;return lcm;}
//ll int bigmod(ll int b, ll int p, ll int m){if(p==0)return 1;if(p%2!=0) return b%m*fun(b,p-1,m)%m;if(p%2==0){ ll int res=fun(b,p/2,m);return (res%m*res%m)%m;}}
//void seive() { prime[np++]=2;for(i=3; i<=sz; i+=2){if(mark[i]==0){ prime[np++]=i;for(j=i*i; j<=sz; j+=i) mark[j]=1; } }}
//string add(string s1,string s2) {string s;int j=s1.size()-1,c=0,m; for(int i=s2.size()-1; i>=0; i--) {if(j>=0)m=s2[i]-'0'+s1[j]-'0'+c;else m=s2[i]-'0'+c; if(m>9) { s+=m%10+'0';c=m/10; } else {  c=0;s+=m+'0'; }j--; } if(c!=0) {s+=c+'0'; }reverse(s.begin(),s.end());return s;}
//int pos;string mul(int n) {string s;for(int i=0; i<pos; i++) { s+="0"; }pos++;int c=0,m; for(int i=s1.size()-1; i>=0; i--) { m=(s1[i]-'0')*n+c;if(m>9) { s+=m%10+'0';c=m/10;} else { c=0; s+=m+'0';} }while(c!=0) { s+=c%10+'0';c=c/10;}    reverse(s.begin(),s.end());return s;}


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
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
