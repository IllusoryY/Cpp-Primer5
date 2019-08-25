#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	cout << "Enter a string of characters including punctuation." << endl;
	for (string s; getline(cin, s); cout << endl)
		for (auto i : s)
			if (!ispunct(i)) cout << i;

	system("pause");
	return 0;
}
