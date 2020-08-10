
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
    int n,data;
    vector<int> val;

    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>data;
        val.push_back(data);
    }
    for(int i = 1 ; i < val.size()-1 ; ++i){
        if(val[i] > val[i-1] && val[i] > val[i+1]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
