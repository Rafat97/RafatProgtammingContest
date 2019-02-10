#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>

using namespace std;

int main(void)
{
    long int w;

    cin>>w;

    if(w > 2 && w%2 == 0)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}

