#include<vector>
#include<iostream>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main41() 
{
	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };

	vector<int> ivec;
	for (auto it = begin(ia); it != end(ia); ++it)
		ivec.push_back(*it);

	for (auto i : ivec)
		cout << i << " ";

	return 0;
}