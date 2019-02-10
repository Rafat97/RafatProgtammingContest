#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
    int t;
    cin>>t;

    cin.ignore();
    while(t > 0)
    {
        string str1;
        getline(cin,str1);
        int length = str1.size();

        for(int i = 0;i<length;i += 2)
        {
            cout<<str1[i];
        }
        cout<<" ";
        for(int i = 1;i < length;i += 2)
        {
            cout<<str1[i];
        }
        cout<<endl;
        t--;
    }
    return 0;
}
