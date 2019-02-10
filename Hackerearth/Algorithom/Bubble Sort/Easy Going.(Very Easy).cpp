#include<bits/stdc++.h>

using namespace std;

void BubblSort(long int arr[],int arrLength){
    int flag = 0;
    //cout<<endl;
    for(int j = 0 ; j < arrLength - 1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
                flag = 1;
            }

        //cout<<arr[j]<<" ";
    }
     //cout<<"\n";
        if(flag == 1){
              BubblSort(arr, arrLength-1);
        }

}


int main(void)
{
    int t;

    cin>>t;
    while(t!=0){
        long int m,n;
        cin>>m>>n;
        long int arr[m];
        long int min = 0,max = 0;
        for(int i = 0;i<m;i++){
            cin>>arr[i];
        }
        BubblSort(arr,m);
        long int element = m-n;
       /* for(int i = 0;i<m;i++){

           cout<<arr[i];

        }*/

        for(int i = 0;i<m;i++){
            if(i >=0 && i <= element - 1){
                min += arr[i];
            }
            if(i >= n && i <= m){
                max += arr[i];
            }
        }
         cout<<max - min<<endl;
        t--;
    }

    return 0;
}
