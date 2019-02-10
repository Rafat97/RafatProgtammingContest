#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int n = 0;
#define arraySize n;
int main()
{
    cin>>n;
    int arrayN[n],arrayW[n];

    for(int i = 0;i<n;i++)
        cin>>arrayN[i];
    for(int i = 0;i<n;i++)
        cin>>arrayW[i];

    double sum1 = 0.0,sum2 = 0.0;

    for(int i = 0;i<n;i++){
        sum1 += (arrayN[i]*arrayW[i]) ;
        sum2 += arrayW[i];
    }
    cout<<setprecision(1)<<fixed<<sum1/sum2<<endl;


    return 0;
}
