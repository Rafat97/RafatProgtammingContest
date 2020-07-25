/**
URL : https://codeforces.com/problemset/problem/1335/A

There are two sisters Alice and Betty. You have n candies.
You want to distribute these n candies between two sisters in such a way that:

Alice will get a (a>0) candies;
Betty will get b (b>0) candies;
each sister will get some integer number of candies;
Alice will get a greater amount of candies than Betty (i.e. a>b);
all the candies will be given to one of two sisters (i.e. a+b=n).
Your task is to calculate the number of ways to distribute exactly n candies between sisters in a way described above.
Candies are indistinguishable.

Formally, find the number of ways to represent n as the sum of n=a+b, where a and b are positive integers and a>b.

You have to answer t independent test cases.

input
6
7
1
2
3
2000000000
763243547
output
3
0
0
1
999999999
381621773

Note
For the test case of the example, the 3 possible ways to distribute candies are:

a=6, b=1;
a=5, b=2;
a=4, b=3.
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

    ll n,val;
    cin>>n;
    while(n--){
        cin>>val;
        cout<<val - ((val/2)+1)<<endl;
    }

    return 0;
}



