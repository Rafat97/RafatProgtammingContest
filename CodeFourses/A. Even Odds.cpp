/**
URl : https://codeforces.com/problemset/problem/486/A

For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1) n n

Your task is to calculate f(n) for a given integer n.

input
4
output
2
input
5
output
-3

Note
f(4) =  - 1 + 2 - 3 + 4 = 2

f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3

*/
#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);

	ll val, even = 0,odd = 0, answer = 0;
	cin>>val;
    even = val/2;
    odd = val - even;
    answer = (even*(even + 1)) - (odd * odd);

    cout<<answer<<endl;

    return 0;
}
