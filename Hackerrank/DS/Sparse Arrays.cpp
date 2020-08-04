/**
https://www.hackerrank.com/challenges/array-left-rotation/problem
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
    vector<string> str;
    vector<string> strQue;
    map<string,ll> que;
    map<string,ll>::iterator it ;
    int strValCount,queValInput;
    string strVal;

    cin>>strValCount;
    for(int i = 0 ;i<strValCount; i++){
        cin>>strVal;
        str.push_back(strVal);
    }
    cin>>queValInput;
    for(int i = 0 ;i<queValInput; i++){
        cin>>strVal;
        strQue.push_back(strVal);
        que[strVal] = 0;
    }
   ;
    for(int i = 0 ;i<str.size(); i++){
        ///if( que[str[i]] )
        it = que.find(str[i]);
        if(it != que.end())
            que[str[i]] += 1;
    }

    for(int i = 0 ; i<strQue.size() ; i++){
        cout<<que[strQue[i]]<<endl;
    }

}


int main()
{
    fastoi ;
    solve();

    return 0;
}



