#include<bits/stdc++.h>

using namespace std ;

int main (void){

    string str;
    while(getline(cin,str)){

        char c[str.length() + 1];

        strcpy(c,str.c_str());
        //cout<<str;
        for (int i=0; i<str.length(); i++)
          cout << (char)(c[i] - 7);
        cout<<endl;

    }

    return 0;
}
