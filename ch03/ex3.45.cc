#include<iostream>

using namespace std;

int main()
{
	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	for (const auto&row:ia)
		for (auto col:row)
			cout << col << " ";
	cout << endl;
}