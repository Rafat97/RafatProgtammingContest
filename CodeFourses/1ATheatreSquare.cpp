#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

int main(void)
{
    long double a,b,c;

    cin>>a>>b>>c;
    cout<<fixed<<setprecision(0)<<ceil((a+a)/(c+c)) * ceil((b+b)/(c+c))<<endl;

    return 0;
}
