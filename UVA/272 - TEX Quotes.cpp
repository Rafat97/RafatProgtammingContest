#include<bits/stdc++.h>

using namespace std;

int main(){

   vector<char> str;
    char c;
    int count = 0,i = 0;



    while(scanf("%c",&c) != EOF){
        str.push_back(c);

        //for(int i = 0;i<strlen(str);i++){
        if(str[i] == '\"' && count % 2 == 0 ){
            str[i] = '`';
            count++;
            printf("%c",'`');
        }
        else if(str[i] == '\"' && count % 2 != 0){
            str[i] = '\'';
            printf("%c",'\'');
            count++;
        }
        cout<<str[i];
    //}
    ///cout<<endl;
    i++;
    }
    ///cout<<endl;

    return 0;
}

