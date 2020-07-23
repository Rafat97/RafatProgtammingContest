/***
The translation from the Berland language into the Birland language is not an easy task.
 Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little:
 it is spelled (and pronounced) reversely. For example,
a Berlandish word code corresponds to a Birlandish word edoc.
However, it's easy to make a mistake during the «translation».
Vasya translated word s from Berlandish into Birlandish as t.
Help him: find out if he translated the word correctly.

input
code
edoc
output
YES
input
abb
aba
output
NO
input
code
code
output
NO
**/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;

    cin>>str1>>str2;

    if(str2.length() != str1.length()){
        cout<<"NO"<<endl;
        return 0;
    }

    reverse(str2.begin(),str2.end());

    if(str2 == str1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
