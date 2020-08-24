
#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define fastoi  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define printNPrecision(afterDigit,value) cout << fixed << setprecision(12) << value <<endl;
#define llu unsigned long long
#define lld long long
#define U unsigned int


#define LSOne(S) (S & (-S))
#define isBitSet(S, i) ((S >> i) & 1)

const int MOD = 1000000007;
const int MAX = 1000005;



void solve(){
        int n,m,check=0,temp;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}for(int i=0;i<m;i++){
			cin>>b[i];
		}
		for(int i=0;i<n;i++){
			temp=a[i];
			for(int j=0;j<m;j++){
				if(b[j]==temp){
					//	break;
					check=1;
					break;
				}
			}
			if(check==1){
				break;
			}
		}
		if(check==1){
			cout<<"YES"<<endl;
			cout<<"1 "<<temp<<endl;

		}
		else{
			cout<<"NO"<<endl;
			//	cout<<"1"<<temp;
		}
}


int main()
{
    fastoi ;
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}

