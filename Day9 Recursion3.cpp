//Source - https://www.hackerrank.com/challenges/30-recursion/problem

#include <bits/stdc++.h>
using namespace std;

// Complete the factorial function below.
int factorial(int n) {
    int fact=0;
    if(n<=1) return 1;
    else
    fact = n*(factorial(n-1));
    return fact;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);
    fout << result << "\n";
    fout.close();
    return 0;
}
