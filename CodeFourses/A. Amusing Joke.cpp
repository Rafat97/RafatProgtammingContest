/**
URL : https://codeforces.com/problemset/problem/141/A

So, the New Year holidays are over. Santa Claus and his colleagues can take a rest and have guests at last.
When two "New Year and Christmas Men" meet,
thear assistants cut out of cardboard the letters from the guest's name and the host's name in honor of this event.
Then the hung the letters above the main entrance.
One night, when everyone went to bed, someone took all the letters of our characters' names.
Then he may have shuffled the letters and put them in one pile in front of the door.

The next morning it was impossible to find the culprit who had made the disorder.
But everybody wondered whether it is possible to restore the names of the host and his guests from the letters lying at the door?
That is, we need to verify that there are no extra letters, and that nobody will need to cut more letters.

Help the "New Year and Christmas Men" and their friends to cope with this problem.
You are given both inscriptions that hung over the front door the previous night,
and a pile of letters that were found at the front door next morning.

input
SANTACLAUS
DEDMOROZ
SANTAMOROZDEDCLAUS
outputCopy
YES
input
PAPAINOEL
JOULUPUKKI
JOULNAPAOILELUPUKKI
outputCopy
NO
input
BABBONATALE
FATHERCHRISTMAS
BABCHRISTMASBONATALLEFATHER
output
NO


Note
In the first sample the letters written in the last line can be used to write the names and there won't be any extra letters left.

In the second sample letter "P" is missing from the pile and there's an extra letter "L".

In the third sample there's an extra letter "L".



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

    string a,b,c,s;
    cin>>a>>b>>c;

    s=a+b;
    sort(s.begin(), s.end());
    sort(c.begin(), c.end());

    if(s == c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}


