#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>

double findMean(int array1[],int n);
double findStdDavition(int array1[],int n);

int n = 0;
double y = 0.0;
#define arraySize n

using namespace std;

int main()
{
    cin>>n;
    int array1[n];
    for(int i = 0;i<n;i++)
        cin >> array1[i];
    y = findMean(array1,n);
    ///cout<<y<<endl;
    cout<<fixed<<setprecision(1)<<findStdDavition(array1,n)<<endl;

    return 0;
}
double findMean(int array1[],int n)
{
    double sum = 0.0;
    sort(array1,array1+n);
    for(int i = 0;i<n;i++)
        sum += array1[i];
    return sum/(float)n;
}
double findStdDavition(int array1[],int n)
{
    double sum = 0.0;
    for(int i = 0;i<n;i++)
        sum += pow((array1[i] - y),2);
    return sqrt(sum/n);
}
