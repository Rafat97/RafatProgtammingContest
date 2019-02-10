#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int x = 0,y = 0;
    int array[5][5];

    for(int i = 0;i<5;i++){
        for(int j = 0 ; j<5;j++)
        {
            cin>>array[i][j];
            if(array[i][j] == 1)
            {
                x = j;
                y = i;
            }
        }
    }

    cout<<abs(2 - x)+abs(2 - y)<<endl;


    return 0;
}

