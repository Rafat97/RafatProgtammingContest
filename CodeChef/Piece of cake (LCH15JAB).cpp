/**
https://www.codechef.com/problems/LCH15JAB

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
    string s;
    int c[26]={0},max=0;
    cin>>s;
    if(s.length()%2==1)
        cout<<"NO"<<endl;
    else{
        for(int i=0;i<s.length();i++) {

            if(s[i]>='a' && s[i]<='z')
                c[s[i]-'a']++;

            else if(s[i]>='A' && s[i]<='Z')
                c[s[i]-'A']++;
        }
        for(int i=0;i<26;i++)
        {
            if(max<c[i])
                max=c[i];
        }
        if(max==s.length()/2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

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



