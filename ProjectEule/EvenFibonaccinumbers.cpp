#include<iostream>

using namespace std;

int main(void)
{
    long long int num1 = 0,num2 = 1,result = 0,sum = 0,n;
    cin>>n;

    for(;result<n;){

        if(result%2 == 0){
           /// cout<<sum<<" ";
            sum += result;
        }
        ///cout<<result<<" ";
        num1 = num2;
        num2 = result;
        result = num1 + num2;
    }
    cout<<sum<<endl;

    return 0;
}
