/**
URL :https://codeforces.com/problemset/problem/469/A

There is a game called "I Wanna Be the Guy", consisting of n levels. Little X and his friend Little Y are addicted to the game. Each of them wants to pass the whole game.

Little X can pass only p levels of the game.
And Little Y can pass only q levels of the game.
You are given the indices of levels Little X can pass and the indices of levels Little Y can pass.
Will Little X and Little Y pass the whole game, if they cooperate each other?

input
4
3 1 2 3
2 2 4
output
I become the guy.
input
4
3 1 2 3
2 2 3
output
Oh, my keyboard!

Note

In the first sample, Little X can pass levels [1 2 3], and Little Y can pass level [2 4],
so they can pass all the levels both.

In the second sample, no one can pass level 4.


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

struct all_level{
    int number;
    bool isFind;
};

int main()
{
    fastoi;

    vector<all_level> levl;
    vector<int> user_pass;

    int total_level , n ,lev_complete, countVal = 0;
    cin>>total_level>>n;

    for(int i = 1 ; i <= total_level;i++){
        all_level all_l ;all_l.isFind = false;all_l.number = i;
        levl.push_back(all_l);
    }
    for(int i = 0; i < n ;i++){
        cin>>lev_complete;
        if(levl[lev_complete-1].isFind == false){
            countVal++;
            levl[lev_complete-1].isFind = true;
        }
    }
    cin>>n;
    for(int i = 0; i < n ;i++){
        cin>>lev_complete;
        if(levl[lev_complete-1].isFind == false){
            countVal++;
            levl[lev_complete-1].isFind = true;
        }
    }

    if(countVal == levl.size()){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}
