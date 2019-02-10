#include<iostream>
#include<cmath>

///600851475143

using namespace std;


#define num 60088

int main(void)
{
    /*long long int n = 60088 ,prime,array[num+1],k=0;


    for(int i = 1;i<=n;i++)
        array[i] = 1;

    array[0] = 0;
    array[1] = 0;

     for(int i = 2;i*i<=n;i++)
    {
        if(array[i] == 1){
            for(int j = i * 2 ; j <= n;j += i)
                array[j] = 0;
        }

    }



    for(int i = 0;i <= n;i++){
        cout<<i<<"\t : \t"<<array[i]<<"\n";
    }


    int count = 0;
    for(int i = 0;i<=n;i++)
        if(array[i] == 1)
            count++;

    cout<<"\n\n"<<count<<endl;


*

                                                                                    /*
                                                                                    for(int i = 4;i<=n;i += 2)
                                                                                        array[i] = 0;
                                                                                    for(int i = 6;i<=n;i += 3)
                                                                                        array[i] = 0;
                                                                                    for(int i = 10;i<=n;i += 5)
                                                                                        array[i] = 0;
                                                                                    for(int i = 14;i<=n;i += 7)
                                                                                        array[i] = 0;
                                                                                    for(int i = 18;i<=n;i += 9)
                                                                                        array[i] = 0;
                                                                                    */




   long long int flag = 1,test = 0,n = 600851475143  ,c = 0;

    for(long long int i = 2;i<=n;i++){
        flag = 1;
        for(long long int j = 2;j*j<=i;j++){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            cout<<i<<endl;
            c++;
            if(n%i == 0)
                test = i;
        }
    }
    cout<<c<<endl;

    cout<<test<<endl;


    return 0;
}

