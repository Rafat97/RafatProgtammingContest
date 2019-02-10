#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<cctype>

using namespace std;

int main()
{
    char str[200];
    int count = 0;

    gets(str);

   for(int i = 1;i<strlen(str);i++)
        if(isupper(str[i]))
            count++;
    if(strlen(str)-1 == count){
        for(int i = 0;i<strlen(str);i++){
            if(str[i] >= 'a' && str[i] <= 'z' )
                str[i] = str[i] - 32;
            else if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        }

    }

    ///cout<<count<<endl;
    cout<<str<<endl;


    return 0;
}

