/***
URL : https://codeforces.com/problemset/problem/160/A

Imagine that you have a twin brother or sister. Having another person that looks exactly like you seems very unusual. It's hard to say if having something of an alter ego is good or bad. And if you do have a twin, then you very well know what it's like.

Now let's imagine a typical morning in your family. You haven't woken up yet, and Mom is already going to work. She has been so hasty that she has nearly forgotten to leave the two of her darling children some money to buy lunches in the school cafeteria. She fished in the purse and found some number of coins, or to be exact, n coins of arbitrary values a 1, a 2, ..., a n. But as Mom was running out of time, she didn't split the coins for you two. So she scribbled a note asking you to split the money equally.

As you woke up, you found Mom's coins and read her note.
"But why split the money equally?" — you thought. After all, your twin is sleeping and he won't know anything.
So you decided to act like that: p
ick for yourself some subset of coins so that the sum of values of your coins is strictly larger than the sum of
values of the remaining coins that your twin will have. However, you correctly thought that if you take too many coins,
the twin will suspect the deception. So, you've decided to stick to the following strategy to avoid
suspicions: you take the minimum number of coins, whose sum of values is strictly more than the sum of values
of the remaining coins. On this basis, determine what minimum number of coins you need to take to divide them
in the described manner.

Examples
input
2
3 3
output
2
input
3
2 1 2
output
2
***/


#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    long int n, val[110], sum = 0 ,cont = 0 ,sum2 = 0;
    cin>>n;

    for(int i = 0 ;i < n ; i++){
        cin>>val[i];
        sum += val[i];
    }

    sum=sum/2;
    sort(val,val+n);

    for(int i = n - 1 ; i >= 0 ; i--){
        sum2 += val[i];
        ++cont;
        if(sum2 > sum){
		 	break;
        }
    }
    cout<<cont<<endl;
    return 0;
}
