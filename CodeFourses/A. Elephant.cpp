/***
URL : https://codeforces.com/problemset/problem/617/A

An elephant decided to visit his friend.
It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x>0)
of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward.
Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

input
5
output
1
input
12
output
3

**/

#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    long int n;
    cin>>n;
    if(n % 5 == 0)
        cout<<n/5<<endl;
    else
        cout<<(n/5) + 1<<endl;

    return 0;
}
