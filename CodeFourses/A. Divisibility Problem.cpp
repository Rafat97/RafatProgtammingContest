/**
URL : https://codeforces.com/problemset/problem/1328/A

You are given two positive integers a and b. In one move you can increase a by 1 (replace a with a+1).
Your task is to find the minimum number of moves you need to do in order to make a divisible by b. It is possible,
that you have to make 0 moves, as a is already divisible by b. You have to answer t independent test cases.

input
5
10 4
13 9
100 13
123 456
92 46
output
2
5
4
333
0

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

    ll n,val1,val2;
    cin>>n;
    while(n--){
        cin>>val1>>val2;
        if(val1%val2 == 0){
            cout<<0<<endl;
        }
        else{
            if(val1 > val2)
                cout<<(val2 * ((val1/val2)+1)) - val1<<endl;
            else if(val1 < val2)
                cout<<val2 - val1<<endl;
        }
    }
    return 0;
}


