/**
https://www.codechef.com/problems/AREAPERI
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
    ll a,b,peri,area;
    cin>>a>>b;
    area = a * b;
    peri = 2 * (a + b);

    if(peri > area){
        cout<<"Peri"<<endl;
        cout<<peri<<endl;
    }
    else if(area > peri){
        cout<<"Area"<<endl;
        cout<<area<<endl;
    }
    else{
        cout<<"Eq"<<endl;
        cout<<area<<endl;
    }

}


int main()
{
    fastoi ;
    solve();

    return 0;
}
