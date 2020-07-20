/***
URL : https://codeforces.com/problemset/problem/977/A

Little girl Tanya is learning how to decrease a number by one,
 but she does it wrong with a number consisting of two or more digits.
 Tanya subtracts one from a number by the following algorithm:

if the last digit of the number is non-zero, she decreases the number by one;
if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
You are given an integer number n. Tanya will subtract one from it k times.
Your task is to print the result after all k subtractions.

It is guaranteed that the result will be positive integer number.


input
512 4
output
50
input
1000000000 9
output
1

*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>x>>n;
    while(n--){
        if(x % 10 == 0)
            x /= 10;
        else
            x--;
    }
    cout<<x<<endl;
    return 0;
}
