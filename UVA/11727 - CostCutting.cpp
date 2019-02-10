#include<bits/stdc++.h>

using namespace std;

int main(){

    int T;
    cin>>T;

    for(int i = 1;i <= T;i++)
    {
        int array[3];
        cin>>array[0]>>array[1]>>array[2];
        sort(array,array+3);
        cout<<"Case "<<i<<": "<<array[1]<<endl;
    }

    return 0;
}
