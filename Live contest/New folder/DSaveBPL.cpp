#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

int main(void)
{

    long long int i,n;

    cin>>n;
    getchar();
    char run[n][2000];

    for(i = 0;i<n;i ++)
        gets(run[i]);

    unsigned long long sum = 0.0;

     for(i = 0;i<n;i++)
        for(int j = 0;j < strlen(run[i]);j++)
            sum += (int)run[i][j] - 96;

    cout<<sum<<endl;
}



