#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>

using namespace std;

int main(void)
{

    double MealCost,totalMealCost,tip,tex;
    int tipPersint,texPersint;

    cin>>MealCost>>tipPersint>>texPersint;

    tip = (MealCost * (tipPersint * 0.01));
    tex = (MealCost * (texPersint * 0.01));

    totalMealCost = MealCost+ tip + tex;

    cout<<"The total meal cost is "<<fixed<<setprecision(0)<<totalMealCost<<" dollars."<<endl;


    return 0;
}
