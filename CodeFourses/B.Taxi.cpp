#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    for(;;){
    int n,countfor = 0,countthr = 0,counttwo = 0,countOn = 0;

    cin>>n;

    int array[n];
    int array2[n];


    for(int i = 0; i<n;i++){
        cin>>array[i];
        array2[i] = 1;
        if(array[i] == 4){countfor++;}
        else if(array[i] == 2){counttwo++;}
        else if(array[i] == 3){countthr++;}
        else countOn++;
    }

    if(countthr == countOn){
        countfor += (countOn + countthr)/2.0;
        countOn = 0;countthr = 0;
    }


    /*sort(array,array + n);
    for(int i = countfor+counttwo; i<n;i++){
        if(array[i] == 1)
        for(int j = i;j<n;j++)
        {
            if(array[j] == 3){
                array[i] = 0;
                array[j] = 0;
                countOn++;
            }
        }
        else if(array[i] == 3)
                countthr++;
    }
*/

    cout<<countfor<<countthr<<counttwo<<countOn<<endl;

    cout<<ceil(countfor + countthr + counttwo/2.0 + countOn)<<endl;

    }
    return 0;
}
