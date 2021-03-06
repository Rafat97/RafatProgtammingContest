/**
URl : https://codeforces.com/problemset/problem/405/A

Little Chris is bored during his physics lessons (too easy),
so he has built a toy box to keep himself occupied. The box is special, since it has the ability to change gravity.

There are n columns of toy cubes in the box arranged in a line.
The i-th column contains a i cubes. At first, the gravity in the box is pulling the cubes downwards.
When Chris switches the gravity, it begins to pull all the cubes to the right side of the box.
The figure shows the initial and final configurations of the cubes in the box:
the cubes that have changed their position are highlighted with orange.


Given the initial configuration of the toy cubes in the box,
find the amounts of cubes in each of the n columns after the gravity switch!

input
4
3 2 1 2
output
1 2 2 3
input
3
2 3 8
output
2 3 8

Note

The first example case is shown on the figure.
The top cube of the first column falls to the top of the last column;
the top cube of the second column falls to the top of the third column;
the middle cube of the first column falls to the top of the second column.

In the second example case the gravity switch does not change the heights of the columns.

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

	ll n,input;
	vector<ll> val;
	cin>>n;

	for(int i = 0;i<n;i++){
        cin>>input;
        val.push_back(input);
	}
	sort(val.begin(),val.end());
    for(int i = 0;i<n;i++){
        cout<<val[i]<<" ";
	}
	cout<<endl;

    return 0;
}
