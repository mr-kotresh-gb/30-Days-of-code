// Source - https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem

#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    string S;
    cin >> S;
    try
    {
        int no;
        no=stoi(S);
        cout<<no<<endl;
    }
    catch(exception a)
    {
        cout<<"Bad String";
    }
    return 0;
}
