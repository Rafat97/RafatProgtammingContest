/**
URL : https://codeforces.com/problemset/problem/208/A

Vasya works as a DJ in the best Berland nightclub, and he often uses dubstep music in his performance. Recently, he has decided to take a couple of old songs and make dubstep remixes from them.

Let's assume that a song consists of some number of words. To make the dubstep remix of this song,
Vasya inserts a certain number of words "WUB" before the first word of the song (the number may be zero),
after the last word (the number may be zero), and between words (at least one between any pair of neighbouring words),
and then the boy glues together all the words, including "WUB", in one string and plays the song at the club.

For example, a song with words "I AM X" can transform into a dubstep remix as "WUBWUBIWUBAMWUBWUBX" and
cannot transform into "WUBWUBIAMWUBX".

Recently, Petya has heard Vasya's new dubstep track, but since he isn't into modern music,
he decided to find out what was the initial song that Vasya remixed. Help Petya restore the original song.

input
WUBWUBABCWUB
output
ABC
input
WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
output
WE ARE THE CHAMPIONS MY FRIEND

Note
In the first sample: "WUBWUBABCWUB" = "WUB" + "WUB" + "ABC" + "WUB".
That means that the song originally consisted of a single word "ABC", and all words "WUB" were added by Vasya.

In the second sample Vasya added a single word "WUB" between all neighbouring words,
in the beginning and in the end, except for words "ARE" and "THE" — between them Vasya added two "WUB".


*/

#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define fastoi  ios::sync_with_stdio(0); cin.tie(0)


int main()
{
    fastoi;

    string str1,strOutput;
    bool giveSpace = false;
    cin>>str1;

    for(int i = 0 ;i < str1.length() ;i++){
        if(str1[i] == 'W' && str1[i+1] == 'U' && str1[i+2] == 'B'){
            i += 2;
            if(giveSpace)
                strOutput += " ";
        }
        else{
            giveSpace = true;
            strOutput += str1[i];
        }

    }
    cout<<strOutput<<endl;

    return 0;
}
