#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;


int main()

{
    int sum = 0,i;

    for(i = 1;i<1000;i++)
    {
        if(i%3 == 0 || i%5 == 0)
        {
            sum += i;
            cout << sum <<endl;
        }
    }
    cout<<endl<<sum<<endl;

    return 0;
}
