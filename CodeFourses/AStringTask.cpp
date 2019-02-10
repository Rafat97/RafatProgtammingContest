#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    string str;
    getline(cin,str);

    for(int i = 0;i<str.size();i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
           str[i] = str[i] + 32;

        if(str[i] == 'a' || str[i] == 'e'||str[i] == 'i' || str[i] == 'o' || str[i] == 'u'||str[i] == 'y')
            cout<<"";
        else
            cout<<"."<<str[i];
    }
    cout<<endl;

    return 0;
}
