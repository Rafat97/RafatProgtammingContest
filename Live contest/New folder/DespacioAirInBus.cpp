#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cstdio>

using namespace std;

int main(void)
{

    unsigned long long T,i;
    cin>>T;
    getchar();
        for(i = 1;i<=T;i++){

        long double num,num3,num2;

        cin>>num>>num2>>num3;

        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<((num*num2) - (num * num3))/2<<endl;

    }
}


