

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
    cin>>n;
    vector< pair<string,string> > v;
    map<string,int> firstNameCount;
    string firstName,LastName;

    for(int i = 0;i < n ; i++){
        cin>>firstName>>LastName;
        v.push_back(make_pair(firstName,LastName));
        if(!firstNameCount[firstName])
            firstNameCount[firstName] = 1;
        else
            firstNameCount[firstName] = firstNameCount[firstName] + 1;
    }

    for(int i = 0; i<n;i++){
        if(firstNameCount[v[i].first] >= 2)
            cout<<v[i].first<<" "<<v[i].second<<endl;
        else
            cout<<v[i].first<<endl;
    }
}


int main()
{
    fastoi ;
    int testCase;
    cin>>testCase;
    while(testCase--)
        solve();

    return 0;
}
