#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<string> str;
    int n;
    string s;
    cin>>n;

    for(int i = 0 ;i < n;i++){
        cin>>s;
        str.push_back(s);
    }
    for(int i = str.size()-1 ; i >= 0 ;i--){
        cout<<str[i]<<endl;
    }

    return 0;
}








