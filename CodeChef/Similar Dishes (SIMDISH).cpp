
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
    string str[4],str2[4],temp;
    for(int i = 0 ; i < 4 ;i++ )
        cin>>str[i];

    for(int i = 0; i < 4; i++)
        cin>>str2[i];

    for(int i = 0 ; i <  4 ; i++){
        for(int j = 0 ; j < 4; j++){
            if(str2[j] == str[i])
                cnt++;
        }
    }
    if(cnt>=2)
        cout<<"similar"<<endl;
    else
        cout<<"dissimilar"<<endl;
}


int main()
{
    fastoi ;
    string buffer;
    int testCase;
    cin>>testCase;
    while(testCase--)
        solve();

    return 0;
}
