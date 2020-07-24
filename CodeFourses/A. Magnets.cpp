/**
URl : https://codeforces.com/problemset/problem/344/A

Mad scientist Mike entertains himself by arranging rows of dominoes. He doesn't need dominoes,
though: he uses rectangular magnets instead. Each magnet has two poles, positive (a "plus") and negative (a "minus").
If two magnets are put together at a close distance, then the like poles will repel each other and the opposite poles will attract each other.

Mike starts by laying one magnet horizontally on the table.
During each following step Mike adds one more magnet horizontally to the right end of the row.
Depending on how Mike puts the magnet on the table, it is either attracted to the previous one (forming a group of multiple magnets linked together) or repelled by it (then Mike lays this magnet at some distance to the right from the previous one). We assume that a sole magnet not linked to others forms a group of its own.


Mike arranged multiple magnets in a row. Determine the number of groups that the magnets formed.


input
6
10
10
10
01
10
10
output
3
input
4
01
01
10
10
output
2

Note
The first testcase corresponds to the figure. The testcase has three groups consisting of three, one and two magnets.

The second testcase has two groups, each consisting of two magnets.
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

    int n,val, previousval = 0 , countGroup = 0;
    cin>>n;
    while(n--){
        cin>>val;
        if(val != previousval){
             countGroup++;
             previousval = val;
        }

    }
    cout<<countGroup<<endl;


    return 0;
}


