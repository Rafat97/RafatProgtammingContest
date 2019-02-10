#include<iostream>

using namespace std;

int main(void)
{

    int n;

    cin>>n;
    int addpass,remvpass,result = 0,totalpass = 0;

    for(int i = 0;i<n;i++)
    {
        cin>>remvpass>>addpass;
        result += (addpass - remvpass);
        ///cout<<result<<endl;
        if(totalpass < result)
            totalpass = result;

    }
    cout<<totalpass<<endl;

    return 0;
}
