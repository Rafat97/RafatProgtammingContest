#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    char str[100] = "sevenkplus";

    cin>>str;

    int length = strlen(str);
    int count = 0;

    sort(str,str + length);

    for(int i = 0;i < length;i++)
    {
        if(str[i] == str[i+1])
            count++;
    }

    if((length - count) % 2 == 0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
