/**
URL : https://codeforces.com/problemset/problem/200/B

Little Vasya loves orange juice very much.
That's why any food and drink in his kitchen necessarily contains orange juice.
There are n drinks in his fridge, the volume fraction of orange juice in the i-th drink equals p i percent.

One day Vasya decided to make himself an orange cocktail.
He took equal proportions of each of the n drinks and mixed them. Then he wondered, how much orange juice the cocktail has.

Find the volume fraction of orange juice in the final drink.

input
3
50 50 100
output
66.666666666667
input
4
0 25 50 75
output
37.500000000000

Note
Note to the first sample:
let's assume that Vasya takes x milliliters of each drink from the fridge.
Then the volume of pure juice in the cocktail will equal  milliliters. The total cocktail's volume equals 3·x milliliters,
so the volume fraction of the juice in the cocktail equals , that is, 66.(6) percent.


*/
#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define fastoi  ios::sync_with_stdio(0); cin.tie(0)
#define printNPrecision(afterDigit,value) cout << fixed << setprecision(12) << value <<endl;


int main()
{
    fastoi;

    int n;
    double val;
    double sum = 0.0;

    cin>>n;

    for(int i = 0 ;i < n; i++ ){
        cin>>val;
        sum += val;
    }
    printNPrecision(12,sum/n)

    return 0;
}
