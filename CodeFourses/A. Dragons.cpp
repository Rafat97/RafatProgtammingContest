
/**
URL : https://codeforces.com/problemset/problem/230/A

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

const int MOD = 1000000007;
const int MAX = 1000005;

int main()
{
    fastoi;

    int s,n,x,y,isMoveNext = 1;
    vector< pair<int,int> > values;
    cin>>s>>n;
    for (int i = 0; i < n; i++) {
        cin>>x>>y;
        values.push_back(make_pair(x,y));
    }
    sort(values.begin(), values.end());

    for (int i = 0; i < n; i++){
        if(s <= values[i].first){
            isMoveNext = 0;
            break;
        } else {
            isMoveNext = 1;
            s += values[i].second;
        }
    }
    if(isMoveNext){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}



