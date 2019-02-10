#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main()
{
    int num1;

    cin>>num1;

    int sum = 0;
    for(int i = 1;i<=10;i++)
    {
        sum += num1;
        cout<<num1<<" x "<<i<<" = "<<sum<<endl;
    }

    return 0;
}
