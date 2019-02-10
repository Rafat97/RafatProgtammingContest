#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main(void)
{
    int n,i,count = 0;

    cin>>n;
    getchar();

    string str;
    getline(cin,str);


    for(i = 0;i < n ;i++)
    {
        if(str[i] == str[i+1])
            count++;
    }

    cout<<count<<endl;


    return 0;
}
