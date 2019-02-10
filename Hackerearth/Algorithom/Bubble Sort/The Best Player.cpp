#include<bits/stdc++.h>

using namespace std;

void BubblSort(long int arr[],string str[],int arrLength){
    int flag = 0;
    //cout<<endl;
    for(int j = 0 ; j < arrLength - 1;j++){
            if(arr[j]<arr[j+1]){
                long int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
                string t = str[j];
                str[j] = str[j+1];
                str[j+1] = t;
                flag = 1;
            }

        //cout<<arr[j]<<" ";
    }
    // cout<<"\n";
        if(flag == 1){
              BubblSort(arr,str, arrLength-1);
        }

}
void sortMy1(string arr[],int arrLength){
    int flag = 0;
    for(int j = 0 ; j < arrLength - 1;j++){

            if(arr[j].compare(arr[j+1])>0){
                string temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
                flag = 1;
            }

    }

        if(flag == 1){
              sortMy1(arr, arrLength-1);
        }

}


int main(void)
{

    int t,n;
    cin>>t>>n;
    string strarr[t] ;
    long int arr[t];
    for(int i = 0 ;i<t ; i++){
       cin>>strarr[i];
        //getchar();
        cin>>arr[i];
    }
    BubblSort(arr,strarr,t);
    //sortMy1(strarr,t);
    for(int i = 0 ;i<n;i++){
        cout<<strarr[i]<<" "<<endl;
    }
    return 0;
}
