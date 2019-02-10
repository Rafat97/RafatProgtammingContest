#include<iostream>

using namespace std;

int main(void)
{

    int array[50] ,n ,k ,Lpoint = 0,totalNextRound = 0 ;

    cin>> n >> k;

    for(int i = 0;i<n;i++)
        cin>>array[i];

    for(int i = 0;i<n;i++)
        if(array[i] > 0 && array[k-1] <= array[i])
            totalNextRound++;

    cout<<totalNextRound<<endl;
    return 0;
}
