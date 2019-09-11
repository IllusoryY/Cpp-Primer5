#include<vector>
#include<iostream>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main42() {
	vector<int> ivec;

	for (int index = 0; index != 10; ++index)
		ivec.push_back(index);

	int ia[10];
	for (int i = 0; i != ivec.size(); ++i) ia[i] = ivec[i];
	
	for (auto a : ia)
		cout << a << " ";

	return 0;
}