#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<cctype>

using namespace std;

int main()
{
    char str[100];
    int flag = 0;

    gets(str);

    for(int i = 0;i<strlen(str);i++){
        if(str[i]== 'H'||str[i]== 'Q'||str[i]== '9'){
            flag = 1;
            break;
        }
    }

    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}


