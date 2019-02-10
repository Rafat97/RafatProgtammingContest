#include<iostream>
#include<iomanip>
#include<algorithm>

int n;
#define arraySize n;
using namespace std;

int main(void)
{

    cin >>n;
    int array1[n];

    for(int i = 0;i<n;i++)
    {
        cin>>array1[i];
    }
    for(int i = n-1; i>=0 ;i--)
    {
        cout<<array1[i]<<" " ;
    }
    cout<< endl;



    return 0;
}
