/**
URL : http://codeforces.com/problemset/problem/785/A

Anton's favourite geometric figures are regular polyhedrons.
Note that there are five kinds of regular polyhedrons:

Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces.
All five kinds of polyhedrons are shown on the picture below:


Anton has a collection of n polyhedrons. One day he decided to know,
how many faces his polyhedrons have in total. Help Anton and find this number!

inputCopy
4
Icosahedron
Cube
Tetrahedron
Dodecahedron
outputCopy
42
inputCopy
3
Dodecahedron
Octahedron
Octahedron
outputCopy
28

Note
In the first sample Anton has one icosahedron, one cube, one tetrahedron and one dodecahedron. Icosahedron has
20 faces, cube has 6 faces, tetrahedron has 4 faces and dodecahedron has 12 faces.
In total, they have 20 + 6 + 4 + 12 = 42 faces.


*/
#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define fastoi  ios::sync_with_stdio(0); cin.tie(0);
#define printNPrecision(afterDigit,value) cout << fixed << setprecision(12) << value <<endl;
#define llu unsigned long long
#define lld long long
#define U unsigned int

const int MOD = 1000000007;
const int MAX = 1000005;

int main()
{
    fastoi;

    int n,Tetrahedron = 4,Cube = 6, Octahedron= 8, Dodecahedron= 12, Icosahedron = 20;
    ll sum = 0;
    string str;

    cin>>n;

    while(n--){
        cin>>str;

        if(str.compare( "Tetrahedron") == 0) {
            sum += Tetrahedron;
        }
        else if(str.compare("Cube") == 0){
            sum += Cube;
        }
        else if(str.compare( "Octahedron") == 0){
            sum += Octahedron;
        }
        else if(str.compare( "Dodecahedron") == 0){
            sum += Dodecahedron;
        }
        else if(str.compare( "Icosahedron") == 0){
            sum += Icosahedron;
        }

    }

    cout<<sum<<endl;


    return 0;
}

