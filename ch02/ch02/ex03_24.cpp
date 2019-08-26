#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main24() {
	vector<int> ivec;

	for (int i; cin >> i; ivec.push_back(i));

	if (ivec.size()<=1) {
		cout << "The input nuber less than one,can't adjacent." << endl;
		return -1;
	}

	//iterator

	for (auto it = ivec.begin(); it != ivec.end() - 1; ++it) {
		cout << (*it) + (*(it + 1)) << " ";
	}
	cout << endl;
	
	for (auto lft = ivec.cbegin(), rht = ivec.cend() - 1; lft <= rht; ++lft, --rht)
		cout << *lft + *rht << " ";
	cout << endl;


	system("pause");
	return 0;
}
