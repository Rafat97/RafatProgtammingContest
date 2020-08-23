
#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define fastoi  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define printNPrecision(afterDigit,value) cout << fixed << setprecision(12) << value <<endl;
#define llu unsigned long long
#define lld long long
#define U unsigned int


#define LSOne(S) (S & (-S))
#define isBitSet(S, i) ((S >> i) & 1)

const int MOD = 1000000007;
const int MAX = 1000005;

struct suffix
{
    int index;
    string value;
};

bool cmp(suffix a , suffix b){
    string s1 = a.value;
    string s2 = b.value;
    return (s1.compare(s2)) < 0 ? true : false;
    ///return a.value < b.value;
}

void solve(){
    string str;
    cin>>str;
    str+="$";
    vector<suffix> data;
    for(int i = 0 ; i < str.size() ;i++){
        suffix s;
        s.index = i;
        s.value = str.substr(i,str.size());
        data.push_back(s);
    }

    sort(data.begin(),data.end(),cmp);

    for(int i = 0 ; i < data.size();i++){
        cout<<data[i].index<<" ";
    }
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

