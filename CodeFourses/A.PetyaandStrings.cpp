#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(void)
{
    char str[100],str2[100];

    gets(str);gets(str2);strlwr(str);strlwr(str2);

    cout<<strcmp(str,str2)<<endl;

    return 0;
}
