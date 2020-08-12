
/**
NOT SOLVED
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
      int current = 0, maxSize = INT_MIN;
      vector<string> v;

        string str;
        while(getline(cin,str))
        {
            v.push_back(str);
            int sz=str.size();
            maxSize=max(maxSize,sz);
        }
        for(int i=0;i<maxSize+2;i++)cout<<"*";
        cout<<endl;

        for(int i = 0 ; i < v.size();i++){
            cout<<"*";
            int remaning = maxSize - v[i].size();
            if(remaning%2 == 0){
                int start = v[i].size()/2;
                for(int j=0;j < start;j++) cout<<" ";
                cout<<v[i];
                for(int j=start+v[i].size();j < maxSize;j++) cout<<" ";
            }
            else{
                int start = (v[i].size()/2) + 1;
                for(int j=0;j < start;j++) cout<<" ";
                cout<<v[i];
                for(int j=start+v[i].size();j < maxSize;j++) cout<<" ";
            }

            cout<<"*";
            cout<<endl;
        }

        for(int i=0;i<maxSize+2;i++)cout<<"*";
        cout<<endl;
}



int main()
{
    fastoi ;
    int t = 1;
    while(t--)
        solve();

    return 0;
}

