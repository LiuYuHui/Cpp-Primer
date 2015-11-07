#include<iostream>
#include<cctype>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string word;
	vector<string>text;
	while (cin >> word)
		text.push_back(word);
	for (auto & c : text)
		for (auto &i:c)
			i = toupper(i);
	for (decltype(text.size()) i = 0; i != text.size(); ++i)
		cout << text[i]<<" ";
}