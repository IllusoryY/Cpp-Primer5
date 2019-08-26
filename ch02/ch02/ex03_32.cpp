#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

int main32() {
	int ia[10];
	int ib[10];
	for (int i = 0; i != 10; ++i) {
		ia[i] = i;
		ib[i] = ia[i];
	}

	for (auto i : ib)
		std::cout << i << " ";

	// vector
	vector<int> v(10);
	for (int i = 0; i != 10; ++i) v[i] = ia[i];
	vector<int> v2(v);
	for (auto i : v2) cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}