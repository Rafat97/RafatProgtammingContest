
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
    int arr[6][6];
    ll sum = INT_MIN,currentSum = 0;
    for(int i = 0 ;i<6;i++)
        for(int j = 0 ;j<6;j++)
            cin>>arr[i][j];

    for(int i = 0 ;i < 4;i++){
        for(int j = 0 ;j < 4;j++){
            currentSum = (arr[i][j]+arr[i][j+1]+arr[i][j+2]) + (arr[i+1][j+1]) + (arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);
            if(currentSum > sum)
                sum = currentSum;
        }
    }
    cout<<sum<<endl;
}


int main()
{
    fastoi ;
    solve();

    return 0;
}
