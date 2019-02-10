#include<bits/stdc++.h>
using namespace std;

int main()
{

    unsigned long long int t;

    cin>>t;

    while(t != 0){

    unsigned long long int n,m,odd = 0,even = 0,count = 0;

    cin>>n;
    cin>>m;

    odd = pow(n,2);
    even = pow(n,2) + n;

    even = even % m;
    odd = odd % m;

    printf("%llu %llu\n",odd,even);
    t--;
    }
    return 0;
}
