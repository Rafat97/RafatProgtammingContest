/**
A Ministry for Defense sent a general to inspect the Super Secret Military Squad under the command of the Colonel SuperDuper.
 Having learned the news, the colonel ordered to all n squad soldiers to line up on the parade ground.

By the military charter the soldiers should stand in the order of non-increasing of their height.
But as there's virtually no time to do that, the soldiers lined up in the arbitrary order. However,
the general is rather short-sighted and he thinks that the soldiers lined up correctly if the first soldier in the line
has the maximum height and the last soldier has the minimum height.
Please note that the way other solders are positioned does not matter,
including the case when there are several soldiers whose height is maximum or minimum.
Only the heights of the first and the last soldier are important.

For example, the general considers the sequence of heights (4, 3, 4, 2, 1, 1) correct and the sequence (4, 3, 1, 2, 2) wrong.

Within one second the colonel can swap any two neighboring soldiers.
Help him count the minimum time needed to form a line-up which the general will consider correct.

input
4
33 44 11 22
output
2
input
7
10 10 58 31 63 40 76
output
10

Note
In the first sample the colonel will need to swap the first and second soldier and then the third and fourth soldier. That will take 2 seconds. The resulting position of the soldiers is (44, 33, 22, 11).

In the second sample the colonel may swap the soldiers in the following sequence:

(10, 10, 58, 31, 63, 40, 76)
(10, 58, 10, 31, 63, 40, 76)
(10, 58, 10, 31, 63, 76, 40)
(10, 58, 10, 31, 76, 63, 40)
(10, 58, 31, 10, 76, 63, 40)
(10, 58, 31, 76, 10, 63, 40)
(10, 58, 31, 76, 63, 10, 40)
(10, 58, 76, 31, 63, 10, 40)
(10, 76, 58, 31, 63, 10, 40)
(76, 10, 58, 31, 63, 10, 40)
(76, 10, 58, 31, 63, 40, 10)

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

    int n,minIndex = 0,minVal = INT_MAX,maxIndex = 0,maxVal = 0,val;
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        cin>>val;
        if(val <= minVal){
            minVal = val;
            minIndex = i;
        }
        if(val > maxVal){
            maxVal = val;
            maxIndex = i;
        }
    }
    //cout<<minIndex<<" "<<maxIndex<<endl;
    if(maxIndex > minIndex){
        cout<<  ( (n-1) - minIndex ) + (maxIndex - 1) <<endl;
    }
    else{
        cout<<   ( (n) - minIndex ) + (maxIndex - 1) <<endl;
    }

    return 0;
}
