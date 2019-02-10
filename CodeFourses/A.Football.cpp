#include<iostream>

using namespace std;

int main(void)
{
    string str ;
    int flag = 0,i;

    getline(cin,str);

    for(i = 0;i<str.size();i++){
        if(str[i] == '0'){
             for(int j = i;j < i+7;j++){
                if(str[j] == '0'){flag = 1;}
                else {flag = 0; i = j-1;break;}
             }
        }
       else if(str[i] == '1'){
             for(int j = i;j < i+7;j++){
                if(str[j] == '1'){flag = 1;}
                else {flag = 0; i = j-1;break;}
             }
        }
        if(flag){cout<<"YES"<<endl;break;}

    }
    if(flag == 0){cout<<"NO"<<endl;}

    return 0;
}

