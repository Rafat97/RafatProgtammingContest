#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    char str[5];
    cin>>str;

    int num = atoi(str);
    int count = 0,ln = strlen(str);

    for(int i = 0;i<ln;i++)
    {
        if(str[i] == '4' || str[i] == '7')
            count++;
    }

    if(ln == count)
        cout<<"YES"<<endl;
    else if(num%4 == 0|| num%7 == 0 || num%47 == 0 )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
