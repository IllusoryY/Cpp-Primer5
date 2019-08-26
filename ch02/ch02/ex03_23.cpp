	#include<iostream>
	#include<vector>

	using std::vector;
	using std::cout;
	using std::endl;

int main23() {
	vector<int> ivec;

	for (int i = 0; i != 10; ivec.push_back(i++));

	for (auto it = ivec.begin(); it != ivec.end(); ++it) {
		cout << *it * 2 << " ";
	}

	system("pause");
	return 0;
}