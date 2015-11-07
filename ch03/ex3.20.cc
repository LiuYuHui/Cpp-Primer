#include<iostream>
#include<vector>

using std::cin;
using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int > ivec;
	int n;
	while(cin>>n)
		ivec.push_back(n);
	for(decltype(ivec.size()) i=0;i!=ivec.size()-1;++i)
		cout<<ivec[i]+ivec[i+1]<<" ";
	cout<<endl;
	for(decltype(ivec.size()) i=0;i!=ivec.size();++i)
		cout<<ivec[i]+ivec[ivec.size()-i-1];

}
