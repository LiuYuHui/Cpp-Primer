#include<string>
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
void ReadFileToVec(const string &fileName, vector<string>& vec) {
	ifstream ifs(fileName);
	if (ifs) {
		string buf;
		while (ifs>>buf) vec.push_back(buf);
	}
}
int main() {
	vector<string> v;
	ReadFileToVec("D:\\1.txt", v);
	for (const auto &str : v) cout << str << endl;
	return 0;
	
}