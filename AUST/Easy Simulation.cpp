#include<bits/stdc++.h>
using namespace std;
/***

We define,
1) Separators are , : ? .
where ", is Comma", ": is Colon", "? is Question", ". is Dot"
2) Operators  are + - * / > < = & |
3) Digits are 0 1 2 3 4 5 6 7 8 9
4) Parenthesis are ( ) { } [ ]
5) Alphabets are a to z & A to Z



1. If the character is a Separator then,print the name of the character that means
either "Comma" or "Colon" or "Question" or "Dot"
2. If the character is an Operator then,print the type of the character That means
either "Arithmetic" or "Logical" or "Relational"
3. If the character is a Digit then,print whether the digit is "Even" or "Odd"
4. If the character is a Parenthesis then, print whether it is -
"Opening First/Second/Third Bracket" or "Closing First/Second/Third Bracket"
5. If the character is an Alphabet then, print whether it is a -
"Lowercase/Uppercase Vowel/Consonant"

*/

void line1(char c);

int main()
{
    char name[100];
    char three[1000];

    char c;

    scanf(" %c",&c);

    if(c == ',' || c == ':' || c == '?' || c == '.')
    {
        strcpy(name , "Separators");
        if(c == ',' )
            strcpy(three,"Comma");
        else if(c == '.')
            strcpy(three,"Dot");
        else if(c == '?')
            strcpy(three,"Question");
        else
            strcpy(three,"Colon");
    }
    if((c >= 'A' && c <= 'Z') || ((c >= 'a' && c <= 'z')))
    {
        strcpy(name ,"Alphabets");
        if((c >= 'A' && c <= 'Z')){
            strcpy(three,"Uppercase");
            if(c == 'A' || c == 'E' || c == 'I'||c == 'O' || c == 'U')
                 strcat(three," Vowel");
        }
        if((c >= 'a' && c <= 'z')){
            strcpy(three,"Lowercase");
            if(c == 'a' || c == 'e' || c == 'i'||c == 'o' || c == 'u')
                 strcat(three," Vowel");
        }

    }
    if(c == '+' || c == '-' || c == '*' || c == '/'|| c == '>' ||c == '<'||c == '&' || c == '|'|| c== '=')
    {
          strcpy(name ,"Operators");
        if(c == '+' || c == '-' || c == '*'||c == '/' )
                 strcat(three," Arithmatic");
                 if(c == '>' || c == '<' || c == '=' )
                 strcat(three," Realtional");
                 if(c == '|' || c == '&')
                 strcat(three," Logical");
    }
    if(c >= '0' && c <= '9')
    {
        strcpy(name , "Digits");
        int num = c - 48;
        if(num%2 == 0)
        {
            strcpy(three ,"Even");
        }
        else
        {
            strcpy(three ,"Odd");
        }

    }
    if(c == '(' || c == ')' || c == '{' || c == '}'|| c == '[' ||c == ']')
    {
        strcpy(name , "Parenthesis");
        if(c == '(' )
        {
        strcpy(three , "Opening First Bracket");
        }
        if(c == '[' )
        {
        strcpy(three , "Opening Third Bracket");
        }
        if(c == '{' )
        {
        strcpy(three , "Opening Second Bracket");
        }
        if(c == ')' )
        {
        strcpy(three , "Closing First Bracket");
        }
        if(c == ']' )
        {
        strcpy(three , "Closing Third Bracket");
        }
        if(c == '}' )
        {
        strcpy(three , "Closing Second Bracket");
        }
    }

;

    cout<<"This is a "<<name;
    cout<<endl;
    printf("The ascii code of %c is %d\n",c,c);
    printf("%s\n",three);

}
void line1(char c)
{




}

