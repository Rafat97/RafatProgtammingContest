
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
    string str,strPart1,strPatr2;
    map<string,int> data;

    cin>>str;
    if(str.size()%2 == 0){
        strPart1 = str.substr(0,(str.size()/2));
        strPatr2 = str.substr((str.size()/2) , str.size());
    }
    else{
        strPart1 = str.substr(0,(str.size()/2));
        strPatr2 = str.substr((str.size()/2)+1 , str.size());
    }
    sort(strPart1.begin(), strPart1.end());
    sort(strPatr2.begin(), strPatr2.end());
    if(strPart1 == strPatr2){
        cout<<"YES"<<endl;
    }else{
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

