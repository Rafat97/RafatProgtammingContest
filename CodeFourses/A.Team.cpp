#include<iostream>

using namespace std;

int main(void)
{

    int ar[3];
    int n = 0,count,total = 0;

    cin>>n;
    for(int i = 1;i <= n; i++)
    {
        cin>>ar[0]>>ar[1]>>ar[2];
        count = 0;
        for(int i = 0;i < 3; i++){
            if(ar[i] == 1)
                count++;
        }
        if(count >= 2)
            total++;
    }
    cout<<total<<endl;

    return 0;
}
