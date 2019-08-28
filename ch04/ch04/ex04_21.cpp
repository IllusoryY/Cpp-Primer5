#include<vector>
#include<iostream>

using std::cout;
using std::endl;
using std::vector;

int main21() {
	vector<int> ivec{ 1,2,3,4,5,6,7,8,9 };

	for (auto i : ivec)
		cout << (i % 2 != 0 ? i * 2 : i) << " ";
	cout << endl;

	system("pause");
	return 0;
}