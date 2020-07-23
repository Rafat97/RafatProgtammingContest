/***
URL : https://codeforces.com/problemset/problem/734/A

Anton likes to play chess, and so does his friend Danik.

Once they have played n games in a row. For each game it's known who was the winner — Anton or Danik.
None of the games ended with a tie.

Now Anton wonders, who won more games, he or Danik? Help him determine this.

input
6
ADAAAA
output
Anton
input
7
DDDAADA
output
Danik
input
6
DADADA
output
Friendship

Note
In the first sample, Anton won 6 games, while Danik — only 1. Hence, the answer is "Anton".

In the second sample, Anton won 3 games and Danik won 4 games, so the answer is "Danik".

In the third sample, both Anton and Danik won 3 games and the answer is "Friendship".

*/
#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int n,countA = 0,countB = 0;
    char value;
    cin>>n;
    for(int i = 0 ; i < n; i++){
        cin>>value;
        if(value == 'A')
            countA++;
        else if(value == 'D')
             countB++;
    }
    if(countA > countB)
        cout<<"Anton"<<endl;
    else if(countA < countB)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;

    return 0;
}

