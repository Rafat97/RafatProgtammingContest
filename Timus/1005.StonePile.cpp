#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdio>
#include<vector>

using namespace std;

int main(void)
{
    vector<double> a;
    double result,low;
    int i = 0 ,n;

    cin>>n;

    for(i = 0;i<n;i++){
        cin>>result;
        a.push_back(result);
    }
    low = a[0];
    for(i = 0;i<n-1;i++){
       result = a[i+1] - a[i];
       if(abs(result) < low){
            low = result;
       }
    }
    cout<<low<<endl;

    return 0;
}
