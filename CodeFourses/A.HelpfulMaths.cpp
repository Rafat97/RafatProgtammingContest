#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main(void)
{
    char str[500],str1[500];
    int i = 0;

    gets(str);



    for(int j = 0;j<strlen(str);i++,j = j + 2 )
        str1[i] = str[j];
    str1[i] = '\0';

    sort(str1,str1+strlen(str1));

    for(int j = 0,i = 0;j<strlen(str);i++,j = j + 2 )
        str[j] = str1[i];

    puts(str);

    return 0;
}

