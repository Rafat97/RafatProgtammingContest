
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
    int n;
    vector< vector <int> > data;

    cin>>n;
    for(int i = 0 ;i < n ;i++){
        vector< int > rowData;
        for(int j = 0 ;j < n ;j++){
            if(i == 0 || j == 0){
                rowData.push_back(1);
            }
            else{
                rowData.push_back( data[i-1][j] + rowData[j-1] );
            }
        }
        data.push_back(rowData);

    }
    cout<<data[data.size()-1][data.size()-1]<<endl;

}


int main()
{
    fastoi ;
    int t =1;
    while(t--)
        solve();

    return 0;
}
