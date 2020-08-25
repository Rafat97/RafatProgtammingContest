
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


void solve(){
    map<string,int> data;
    string str1,str2;
    int n,m;

    cin>>n>>m;

    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < m ;j++){
            cin>>str1;
            data[str1]++;
        }
    }
    if(data["C"] >=1 || data["M"] >=1 || data["Y"] >=1){
        cout<<"#Color"<<endl;
    }else{
        cout<<"#Black&White"<<endl;
    }

}


int main()
{
    fastoi ;
    int t = 1 ;
    while(t--)
        solve();

    return 0;
}
