/**
Url : http://codeforces.com/problemset/problem/443/A

Recently, Anton has found a set. The set consists of small English letters.
Anton carefully wrote out all the letters from the set in one line, separated by a comma.
He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

Unfortunately, from time to time Anton would forget writing some letter and write it again.
He asks you to count the total number of distinct letters in his set.

input
{a, b, c}
output
3
input
{b, a, b, a}
output
2
input
{}
output
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
    string str;
    set<char> all_char;

    getline(cin,str);

    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            all_char.insert(str[i]);
    }
    cout<<all_char.size()<<endl;

    return 0;
}
