#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main()
{
    int num1;

    cin>>num1;

    if(num1%2 != 0){
        cout<<"Weird"<<endl;
    }
    else
    {
        if(num1 >=2 && num1 <= 5)
            cout<<"Not Weird"<<endl;
        else if(num1 >= 6 && num1 <= 20)
            cout<<"Weird"<<endl;
        else
            cout<<"Not Weird"<<endl;
    }

    return 0;
}
