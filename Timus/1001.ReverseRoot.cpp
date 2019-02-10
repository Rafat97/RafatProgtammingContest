#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdio>
#include<vector>

using namespace std;

int main(void)
{
    vector<double> a;
    double result;
    int i = 0 ;

    while(scanf("%lf",&result) != EOF){
        a.push_back(result);
    }

        ///cout<<fixed<<setprecision(4)<<sqrt(array[i])<<endl;
        for(i = a.size()-1;i >= 0 ;i--)
        {
            printf("%.4lf\n",sqrt(a[i]));
        }


    return 0;
}
