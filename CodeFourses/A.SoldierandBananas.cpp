/***

k the cost of the first banana
He has n dollars
w number of bananas he wants

*/
#include<bits/stdc++.h>

using namespace std;

int main(void)
{

    long int k,n,w,sum = 0;


    cin>>k>>n>>w;

    for(int i = 1;i<=w;i++)
    {
        sum += i * k;
    }
    if(sum>=n)
    cout<< sum - n <<endl;
    else
        cout<<"0"<<endl;

    return 0;
}
