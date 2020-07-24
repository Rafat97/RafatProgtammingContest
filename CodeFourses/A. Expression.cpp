/**
URl : https://codeforces.com/problemset/problem/479/A

Petya studies in a school and he adores Maths. His class has been studying arithmetic expressions. On the last class the teacher wrote three positive integers a, b, c on the blackboard. The task was to insert signs of operations '+' and '*', and probably brackets between the numbers so that the value of the resulting expression is as large as possible. Let's consider an example: assume that the teacher wrote numbers 1, 2 and 3 on the blackboard. Here are some ways of placing signs and brackets:

1+2*3=7
1*(2+3)=5
1*2*3=6
(1+2)*3=9
Note that you can insert operation signs only between a and b, and between b and c, that is, you cannot swap integers. For instance, in the given sample you cannot get expression (1+3)*2.

It's easy to see that the maximum value that you can obtain is 9.

Your task is: given a, b and c print the maximum value that you can get.


input
1
2
3
output
9
input
2
10
3
output
60
*/
#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b,c,exp[6];
	cin>>a>>b>>c;

    exp[0]=a+b+c;
	exp[1]=a*b*c;
	exp[2]=a+b*c;
	exp[3]=a*b+c;
	exp[4]=a*(b+c);
	exp[5]=(a+b)*c;

	sort(exp , exp+6);

	cout<<exp[5]<<endl;

    return 0;
}
