/**
URL : https://codeforces.com/problemset/problem/59/A

Vasya is very upset that many people on the Net mix uppercase and lowercase letters
 in one word. That's why he decided to invent an extension for his favorite browser that would change the letters'
  register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones.
  At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house,
  and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the
   letters with lowercase ones. For example, maTRIx should be replaced by matrix.
   Your task is to use the given method on one given word.

input
HoUse
output
house
input
ViP
output
VIP
input
maTRIx
output
matrix
*/
#include<bits/stdc++.h>

using namespace std;

int main(){

    int countUppar = 0, countLower = 0;
    string str;
    cin>>str;

    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            countUppar++;
        }
        if(str[i] >= 'a' && str[i] <= 'z'){
            countLower++;
        }
    }

    if(countUppar > countLower){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        /*
        for(int i = 0 ; i < str.length() ; i++){
            str[i] = toupper(str[i]);
        }
        */
    }else{
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        /*
        for(int i = 0 ; i < str.length() ; i++){
            str[i]= tolower(str[i]);
        }
        */
    }
    cout<<str<<endl;

    return 0;
}
