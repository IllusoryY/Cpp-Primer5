#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl; using std::string;

int main20() {
	string word, preWord;

	while (cin >> word) {
		if (word == preWord) {
			break;
		}
		preWord = word;
	}
	
	if (cin.eof())  cout << "no word was repeated." << endl;
	else            cout << word << " occurs twice in succession." << endl;

	system("pause");
	return 0;
}