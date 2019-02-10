#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long int n;
    cin>>n;
    long int varint[n],mitro[n];
    int count= 0;
    for(int i = 0;i<n;i++){
        cin>>varint[i];
    }
    for(int i = 0;i<n;i++){
        cin>>mitro[i];
       if(varint[i]>mitro[i]){
            //cout<<i<<endl;
         count++;
       break;
       }
    }
    if(count>=1){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
    return 0;
}
