#include<iostream>

using namespace std;

int main(void)
{

    string str;
    int n,total = 0;

    cin>>n;
    for(int i = 1;i <= n;i++){
        cin>>str;
        if(str[1] == '+')
            total++;
        else if(str[1] == '-')
            total--;
    }
    cout<<total<<endl;
    return 0;
}
