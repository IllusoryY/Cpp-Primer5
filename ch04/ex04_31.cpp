#include<vector>

using std::vector;

int main() {
	vector<int> ivec;

	//use prefix
	vector<int>::size_type cnt = ivec.size();
	// assign values from size... 1 to the elements in ivec
	for (vector<int>::size_type ix = 0;
		ix != ivec.size(); ++ix, --cnt)
		ivec[ix] = cnt;

	//use postfix
	vector<int>::size_type cnt = ivec.size();
	// assign values from size... 1 to the elements in ivec
	for (vector<int>::size_type ix = 0;
		ix != ivec.size(); ix++, cnt--)
		ivec[ix] = cnt;

	system("pause");
	return 0;
}