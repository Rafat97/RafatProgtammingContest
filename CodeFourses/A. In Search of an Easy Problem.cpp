/**
URL :https://codeforces.com/problemset/problem/1030/A

When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible.
This time the coordinator had chosen some problem and asked n people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these n people has answered that the problem is hard,
the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.

input
3
0 0 1
output
HARD
input
1
0
output
EASY

Note
In the first example the third person says it's a hard problem, so it should be replaced.

In the second example the problem easy for the only person, so it doesn't have to be replaced.

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

    int n,val,countHard = 0;
    cin>>n;
    while(n--){
        cin>>val;
        if(val == 1)
            countHard++;
    }
    if(countHard)
       cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;

    return 0;
}



