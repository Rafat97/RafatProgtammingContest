#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<cstdio>
#include<cmath>

using namespace std;

int main(void)
{
    string str1;
    int T;

    cin>>T;
    cin.ignore();

    while(T > 0){

        getline(cin,str1);

        int strSize = str1.size();

        if(strSize > 10)
            cout<<str1[0]<<strSize-2<<str1[strSize-1]<<endl;
        else
            cout<<str1<<endl;
        T--;
    }
    return 0;
}
