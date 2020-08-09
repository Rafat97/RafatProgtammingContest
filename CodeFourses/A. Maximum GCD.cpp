
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



void solve(){
    /** TLE SOLUTION */
    int n,maxGcd = 1;
    vector<int> data;
    cin>>n;
    for(int i = 1 ;i <= n ;i++){
        data.push_back(i);
    }
    for(int i = 1 ;i < data.size() ;i++)
        for(int j = i + 1;j < data.size() ;j++ ){
                if(data[i]%data[j] == 0 || data[j] % data[i] == 0){
                    ///cout<<data[i]<<" "<<data[j]<<" "<<__gcd(data[i], data[j])<<endl;
                    maxGcd = max(maxGcd,__gcd(data[i], data[j]));
                }
        }

    cout<<maxGcd<<endl;
}
void solve2(){
    int n;
    cin>>n;
    cout<<n/2<<endl;
}

int main()
{
    fastoi ;
    int t;
    cin>>t;
    while(t--)
        solve2();

    return 0;
}

