#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main14() {
	unsigned cnt = 1, dupCnt = 1;
	string dupWord;

	for (string word, preWord; cin >> word; preWord = word) {
		if (word == preWord) {
			++cnt;
			if (cnt > dupCnt) {
				dupCnt = cnt;
				dupWord = word;
			}
		}
		else {
			cnt = 1;
		}
	}

	if (dupCnt != 1) {
		cout << "the word " << dupWord << " occurred " << dupCnt << " times. " << endl;
	}
	else {
		cout << "There's no duplicated string." << endl;
	}

	system("pause");
	return 0;
	
}