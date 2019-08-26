#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::vector;
using std::string;
using std::cout;
using std::endl;

int main17() {
	vector<string> svec;

	for (string str; cin >> str; svec.push_back(str));

	for (auto &i : svec)
		for (auto &j : i)
			j = toupper(j);

	for (string::size_type i = 0; i != svec.size();++i) {
		if (i != 0 && i % 8 == 0) cout << endl;
		cout << svec[i] << " ";
	}

	system("pause");
	return 0;
}