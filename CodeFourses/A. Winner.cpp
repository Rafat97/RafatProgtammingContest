
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
    string str;
    int n,val;
    map<string,int> data,data2;
    vector<pair<string,int> > time_line;
    map<string,int>::iterator it;
    string ans;
    int maxVal = INT_MIN;
    cin>>n;

    for(int i = 0 ; i<n ;i++){
        cin>>str>>val;
        data[str] += val;
        time_line.push_back(make_pair(str,val));

    }
    for(it = data.begin() ; it != data.end() ;it++){
        maxVal = max(maxVal,(*it).second);
    }
    for(int i = 0 ; i<n ;i++){
        string nam=time_line[i].first;
        int val=time_line[i].second;

        data2[nam] += val;
        ///main logic
        if(data[nam] == maxVal && data2[nam] >= maxVal){
            cout<<nam;
            return ;
        }

    }
    cout<<maxVal<<endl;
    /**
     for(it = data.begin() ; it != data.end() ;it++){
        //cout<<(*it).first<<" "<<(*it).second<<endl;
        if ((*it).second > maxVal) {
            maxVal = (*it).second;
            ans = (*it).first;
        }
     }
     cout<<ans<<endl;
     */

}


int main()
{
    fastoi ;
    int t = 1;
    while(t--)
        solve();

    return 0;
}

