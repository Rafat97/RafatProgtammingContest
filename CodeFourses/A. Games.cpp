/**
URL : http://codeforces.com/problemset/problem/785/A

Manao works on a sports TV. He's spent much time watching the football games of some country.
After a while he began to notice different patterns.
For example, each team has two sets of uniforms: home uniform and guest uniform.
When a team plays a game at home, the players put on the home uniform.
When a team plays as a guest on somebody else's stadium, the players put on the guest uniform. The only exception to that rule is: when the home uniform color of the host team matches the guests' uniform, the host team puts on its guest uniform as well. For each team the color of the home and guest uniform is different.

There are n teams taking part in the national championship.
The championship consists of n·(n - 1) games: each team invites each other team to its stadium.
At this point Manao wondered: how many times during the championship is a host team going to put on the guest uniform? Note that the order of the games does not affect this number.

You know the colors of the home and guest uniform for each team.
For simplicity, the colors are numbered by integers in such a way that no two distinct colors have the same number.
Help Manao find the answer to his question.

inputCopy
3
1 2
2 4
3 4
outputCopy
1
inputCopy
4
100 42
42 100
5 42
100 5
outputCopy
5
inputCopy
2
1 2
1 2
outputCopy
0

In the first test case the championship consists of 6 games.
The only game with the event in question is the game between teams 2 and 1 on the stadium of team 2.

In the second test sample the host team will have to wear guest uniform in the games
between teams: 1 and 2, 2 and 1, 2 and 3, 3 and 4, 4 and 2 (the host team is written first).
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

    int n,val1,val2,cnt= 0;
    vector<int> h,a;
    cin>>n;

    for(int i = 0; i< n ; i++){
        cin>>val1>>val2;
        h.push_back(val1);
        a.push_back(val2);
    }
    for(int i = 0;i < h.size();i++){
        for(int j = 0;j<a.size();j++){
            if (h[i] == a[j])
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

