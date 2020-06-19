//Source - https://www.hackerrank.com/challenges/30-generics/problem

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <class T>
void printArray(vector<T> vec)
{
   for(int i=0; i<vec.size(); i++)
   cout<<vec[i]<<endl;
}

int main()
{
	int n;
	cin >> n;
	vector<int> int_vector(n);
	for (int i = 0; i < n; i++)
  {
		int value;
		cin >> value;
		int_vector[i] = value;
	}
	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++)
  {
		string value;
		cin >> value;
		string_vector[i] = value;
	}
	printArray<int>(int_vector);
	printArray<string>(string_vector);

	return 0;
}
