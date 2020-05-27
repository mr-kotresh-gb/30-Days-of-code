//source - https://www.hackerrank.com/challenges/30-operators/problem

#include <bits/stdc++.h>
using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip=meal_cost*tip_percent/100;
    double tax=meal_cost*tax_percent/100;
    int totalCost=(int)round(meal_cost+tip+tax);    
    cout<<totalCost;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;

    int tip_percent;
    cin >> tip_percent;

    int tax_percent;
    cin >> tax_percent;
    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
