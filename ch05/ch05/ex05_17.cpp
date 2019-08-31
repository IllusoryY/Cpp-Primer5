#include<iostream>
#include<vector>

using std::cout; using std::endl; using std::vector;

bool compareTwoVec(vector<int>& v1, vector<int>& v2) {
	if (v1.size() != v2.size()) {
		for (size_t ix = 0, shorterVec = (v1.size() > v2.size() ? v2.size() : v1.size());
			ix != shorterVec; ++ix) {
			if (v1[ix] != v2[ix]) return false;
		}
		return true;
	}
	else {
		cout << "Please enter two length Vector" << endl;
		return false;
	}
}

int main17() {
	vector<int> ivec1{ 0,1,1,2 }, ivec2{ 0,1,1,2,3,5,8 };

	cout << (compareTwoVec(ivec1, ivec2) ? "yes\n" : "no\n");

	system("pause");
	return 0;
}