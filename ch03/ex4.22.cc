#include<iostream>
#include<vector>   
#include<string>
using namespace std;

int main()
{   
	int grade;
	cin >> grade;
	string finalgrade = (grade > 90) ? "high pass"
		: (grade > 75) ? "pass" : (grade > 60) ? "low pass" : "fail";
	if (grade > 90)
		cout << "hight pass";
	else if (grade > 75)
		cout << "pass";
	else if (grade > 60)
		cout << "low pass";
	else
		cout << "fail";
	cout << finalgrade;
}