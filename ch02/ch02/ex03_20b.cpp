#include<iostream>
#include<vector>

using std::cin;
using std::vector;
using std::cout;
using std::endl;

int main20b() {
	vector<int> ivec;

	for (int val; cin >> val; ivec.push_back(val));
	if (ivec.empty())
	{
		cout << "input at least one integer." << endl;
		return -1;
	}

	int sum = 0;
	for (int i = 0,j = ivec.size() - 1; i <= j ; ++i,--j) {
		if (i == j) {
			cout << "The middle number is: " <<ivec[i] << endl;
			break;
		}
		sum = ivec[i] + ivec[j];
		cout << sum << endl;
	}


	system("pause");
	return 0;
}