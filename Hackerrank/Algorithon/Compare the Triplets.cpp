#include <bits/stdc++.h>

#define ArrayMaxSize 100000000
#define ll long long

using namespace std;

int main(){

    array<int, 3> ar1;
    array<int, 3> ar2;
    int p1 = 0,p2 = 0;

    cin>>ar1[0]>>ar1[1]>>ar1[2];
    cin>>ar2[0]>>ar2[1]>>ar2[2];


    for(int i = 0 ;i < 3 ;i++){
         if(ar1[0] > ar2[0] || ar1[1] > ar2[1] || ar1[2] > ar2[2]){
        p1++;
    }

     if(ar1[0] < ar2[0] || ar1[1] < ar2[1] || ar1[2] < ar2[2]){
        p2++;
    }
    }

    cout<<p1<<" "<<p2<<endl;



    return 0;
}
