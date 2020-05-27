//source - https://www.hackerrank.com/challenges/30-data-types/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int a; double b; char c[100];
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&a);
    scanf("%lf",&b);
    scanf("%*[\n] %[^\n]",c);
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+a);
    
    // Print the sum of the double variables on a new line.
    printf("%.01lf\n",d+b);
    
    // Concatenate and print the String variables on a new line
    printf("%s%s",s,c);
    return 0;
}
