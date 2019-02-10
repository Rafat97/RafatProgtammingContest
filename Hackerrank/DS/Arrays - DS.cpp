#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int sto;
    cin>>n;

    vector<int> val;

    for(int i = 0 ; i < n ; i++){
        cin>>sto;
        val.push_back(sto);
    }
    reverse(val.begin(),val.end());

    vector <int> :: iterator it;

    for (it = val.begin(); it != val.end(); it++)
        cout << (*it) << " ";


    return 0;

}
