#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
	
int main()
{
	vector<int>ivec;
	int n;
	while(cin>>n)
		ivec.push_back(n);
	for (auto beg = ivec.begin();
		beg + 1 != ivec.end(); ++beg)
		cout << *beg + *(beg + 1);
	cout << endl;
	for (auto beg = ivec.begin(), end = ivec.end()-1;
		beg<= end;++beg,--end)
	{
		cout<<*beg+*end;
	}

}