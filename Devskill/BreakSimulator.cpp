#include<bits/stdc++.h>

using namespace std;

int main()
{

    double a,b;
    int T;

    cin>>T;
    while(T>0){
        cin>>a>>b;
        cout<<"-"<<fixed<<setprecision(2)<<a/b<<endl;
        T--;
    }
    return 0;
}
