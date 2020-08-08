//Source - https://www.hackerrank.com/challenges/30-arrays/problem

#include <iostream>
int main()
{
    int N,i=0;
    std::cin>>N;
    int *A = new int[N];
    while(std::cin>>A[i++]);
    while(std::cout<<A[--N]<<' ' && N);
    delete[] A;
    return 0;
}
