/**
URL : https://codeforces.com/problemset/problem/750/A
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
    int totalTime = 240,remTime,sum = 0,ans = 0;
    int n,k;
    cin>>n>>k;
    remTime = totalTime - k;
    if(remTime == 0){
        cout<<"0"<<endl;
    }else{
        for (int i=1; i <= n; i++)
        {
            sum += 5 * i;
            if (sum > remTime)
                break;

            ans++;
        }
        cout<<ans<<endl;

    }

}


int main()
{
    fastoi ;
    solve();

    return 0;
}
