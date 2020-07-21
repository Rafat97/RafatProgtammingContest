/**
URL : https://codeforces.com/contest/110/problem/A

Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal
representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in
it is a lucky number. He wonders whether number n is a nearly lucky number.

input
40047
output
NO
input
7747774
output
YES
input
1000000000000000000
output
NO
*/

#include<bits/stdc++.h>

using namespace std;

int main(){

/**
 first submition
    bool isNo = false;
    string str;

    cin>>str;
    for(long int i = 0 ; i < str.length() ;i++){
        if(str[i] == '4' || str[i] == '7'){
            isNo = false;
        }
        else{
            isNo = true;
            cout<<"NO"<<endl;
            break;
        }
    }
    if (!isNo)
        cout<<"YES"<<endl;

        */
    long long n,count = 0;
    cin >> n;
     ;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count += 1;
        }
        n /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return  0 ;
}
