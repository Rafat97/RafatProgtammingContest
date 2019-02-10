#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n,k;
    cin>>n;
    if(n>1){
        cout<<(n*(n+1))/2<<endl;
    }
    else if(n == 0){
        cout<<1<<endl;
    }
    else{

        cout<<1+((n*(1-n))/2)<<endl;
    }
    return 0;

}



