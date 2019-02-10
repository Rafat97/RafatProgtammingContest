#include<iostream>
#include<iomanip>
#include<cmath>

unsigned long long int n;

using namespace std;

int main()
{
    unsigned long long int i;

    cin>>n;

    unsigned long long int array1[n],sum,sumOdd = 0,sumEven=0;

    for(i = 0;i < n;i++){
        cin>> array1[i];
        if(array1[i] %2 == 0)
            sumEven +=array1[i];
        else
             sumOdd +=array1[i];
    }

    ///sum = array1[n-1] + array1[n - 2];

   /* if(sum%2 == 0){
        cout<<"Second"<<endl;
    }
    else
        cout <<"First"<<endl;

    */
    if(sumEven > sumOdd)
        cout <<"Second"<<endl;
    else
        cout<<"First"<<endl;
    return 0;
}
