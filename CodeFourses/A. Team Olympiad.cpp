
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
    int n,val,cntOne = 0,cntTwo = 0,cntThree = 0,minVal;
    vector<int> one,two,three;
    cin>>n;
    for(int i = 1 ; i <= n; i++){
        cin>>val;
        if(val == 1){
            one.push_back(i);
            cntOne++;
        }
        else if(val == 2){
            two.push_back(i);
            cntTwo++;
        }
        else if(val == 3){
            three.push_back(i);
            cntThree++;
        }
    }
    minVal = min(min(cntOne , cntTwo),cntThree);
    cout<<minVal<<endl;
    for (int i = 0; i < minVal; i++) {
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }


}


int main()
{
    fastoi ;
    int t = 1;
    while(t--)
        solve();

    return 0;
}

