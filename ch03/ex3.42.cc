#include<iostream>
#include<vector>
#include<iterator>

using namespace std;
int main()
{
	int a[5];
	vector<int>ivec;
	for (auto i = 0; i<5; ++i)
	{
		ivec. push_back(i);
	}
	for (auto i : ivec){
		a[i] = ivec[i];
	}
	for (auto i : a)
		cout << i;
}