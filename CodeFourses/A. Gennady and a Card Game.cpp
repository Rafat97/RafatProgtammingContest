/**
https://codeforces.com/problemset/problem/1097/A
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
    bool isPlay = false;
    string str1,str2;
    cin>>str1;
    for(int i = 0 ;i < 5 ;i++){
        cin>>str2;
        if( ( str2.find(str1[0]) != string::npos ) || ( str2.find(str1[1]) != string::npos ))
            isPlay = true;
    }

    if(isPlay)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


int main()
{
    fastoi ;
    int t = 1;
    while(t--)
        solve();

    return 0;
}
