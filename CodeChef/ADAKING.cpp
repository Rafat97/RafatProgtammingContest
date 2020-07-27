/**
URL : https://www.codechef.com/problems/ADAKING
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



void solve(){
        int i,j;
        int k;

        cin>>k;
        for (i = 0;i < 8 ;i++)
        {
            for (j = 0 ;j < 8;j++)
            {
                if (i == 0 && j == 0)
                {
                    cout<<"O";
                    k--;
                }
                else if (k > 0)
                {
                    cout<<".";
                    k--;
                }
                else
                    cout<<"X";
            }
             cout<<endl;
        }
        cout<<endl;
}


int main()
{

    fastoi;

    int i,j;
    int t,test;

    cin>>test;

    while(test--)
        solve();
    return 0;
}

