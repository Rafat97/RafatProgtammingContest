/**
URl : https://codeforces.com/problemset/problem/705/A

Dr. Bruce Banner hates his enemies (like others don't).
As we all know, he can barely talk when he turns into the incredible Hulk.
That's why he asked you to help him to express his feelings.

Hulk likes the Inception so much, and like that his feelings are complicated.
They have n layers. The first layer is hate, second one is love, third one is hate and so on...

For example if n = 1, then his feeling is "I hate it" or if n=2
it's "I hate that I love it", and if n = 3 it's "I hate that I love that I hate it" and so on.

Please help Dr. Banner.

input
1
output
I hate it
input
2
output
I hate that I love it
input
3
output
I hate that I love that I hate it
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

	int val;
	string str;
	cin>>val;
    for(int i = 1;i < val; i++){
        if(i%2 != 0)
            str += "I hate that ";
        else
            str += "I love that ";
    }
    if(val%2 != 0)
        str += "I hate it ";
    else
        str += "I love it ";
    cout<<str<<endl;

    return 0;
}


