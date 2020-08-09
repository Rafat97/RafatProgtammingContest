/**
https://codeforces.com/problemset/problem/749/A
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
    int n,val,temp,currentVal = 2;
    vector<int> data;
    cin>>n;
    val = n;
    while(val != 0){
        val -= currentVal;
        if(val < 0){
            val += data[data.size()-1] + data[data.size()-1];
            currentVal = data[data.size()-1] + 1;
            data.pop_back();
        }
        else if(val > 0){
            data.push_back(currentVal);
            currentVal = 2;
        }
    }
    data.push_back(currentVal);
    cout<<data.size()<<endl;
    for(int i = 0 ;i < data.size() ;i++){
        cout<<data[i]<<" ";
    }
}
void solve2(){
    int n;
    cin>>n;
    cout<<n/2<<endl;
    if (n%2==0){
        for(int  i=0;i<n/2-1;i++){
            cout<<"2 ";
        }
        cout<<"2"<<endl;
    }else{

        for(int i=0;i<n/2-1;i++){
            cout<<"2 ";
        }
        cout<<"3"<<endl;
    }
}


int main()
{
    fastoi ;
    int t = 1;
    while(t--)
        solve2();

    return 0;
}

