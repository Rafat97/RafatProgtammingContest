/**
URL : https://codeforces.com/problemset/problem/451/A

After winning gold and silver in IOI 2014, Akshat and Malvika want to have some fun. Now they are playing a game on a grid made of n horizontal and m vertical sticks.

An intersection point is any point on the grid which is formed by the intersection of one horizontal stick and one vertical stick.

In the grid shown below, n = 3 and m = 3. There are n + m = 6 sticks in total (horizontal sticks are shown in red and vertical sticks are shown in green). There are n·m = 9 intersection points, numbered from 1 to 9.


The rules of the game are very simple. The players move in turns. Akshat won gold, so he makes the first move. During his/her move, a player must choose any remaining intersection point and remove from the grid all sticks which pass through this point. A player will lose the game if he/she cannot make a move (i.e. there are no intersection points remaining on the grid at his/her move).

Assume that both players play optimally. Who will win the game?

input
2 2
output
Malvika
input
2 3
output
Malvika
input
3 3
input
Akshat
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

    int a,b;
    cin>>a>>b;

    if(a>b)
        swap(a,b);

    if(a%2 == 0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;

    return 0;
}


