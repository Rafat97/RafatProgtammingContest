#include<iostream>
#include<algorithm>

double FuncMean(double array1[],int n);
double FuncMedian(double array1[],int n);
double FuncMode(double array1[],int n);

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    double array1[n];
    for(i = 0;i<n;i++)
        cin>>array1[i];
    cout<<FuncMean(array1,n)<<endl;
    cout<<FuncMedian(array1,n)<<endl;
    cout<<FuncMode(array1,n)<<endl;

    return 0;
}
double FuncMean(double array1[],int n)
{
    int i;
    double sum = 0.0;
    for(i = 0;i<n;i++)
        sum += array1[i];
    return sum/n;
}
double FuncMedian(double array1[],int n)
{
    sort(array1,array1+n);
    if(n%2 != 0)
        return array1[n/2];
    else
        return (array1[n/2 - 1] + array1[n/2]) / 2.0;
}
double FuncMode(double array1[],int n)
{
    int cont = 0,mam = 0,valcont = 0;;
    for(int i = 0;i<n;i++){
            cont = 0;
        for(int j = i+1;j < n;j++){
            if(array1[i] == array1[j])
                cont++;
        }
        if(valcont < cont){
            valcont = cont;
            mam = i;
        }
    }
    return array1[mam];


}
