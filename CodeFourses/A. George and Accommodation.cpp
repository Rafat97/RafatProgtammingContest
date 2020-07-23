/**

URL : https://codeforces.com/problemset/problem/467/A

George has recently entered the BSUCP (Berland State University for Cool Programmers).
George has a friend Alex who has also entered the university. Now they are moving into a dormitory.

George and Alex want to live in the same room. The dormitory has n rooms in total.
At the moment the i-th room has p i people living in it and the room can accommodate q i people in total ( p i ≤ q i).
Your task is to count how many rooms has free place for both George and Alex.

input
3
1 1
2 2
3 3
output
0
input
3
1 10
0 10
10 10
output
2

*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,cnt = 0 ,num1, num2;
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        cin>>num1>>num2;
        if((num2 - num1) >= 2)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
