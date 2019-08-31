#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl; using std::string;

int main19() {
	char ch('\0');

	do{
		string str1, str2;

		cout << "Please enter two string: \t";
		if (cin >> str1 >> str2) {
			cout << "The shorter is:\t" << (str1 <= str2 ? str1 : str2) << endl;
			
			cout << "========================" << endl;
			cout << "do it again?Enter y or n" << endl;
			cin >> ch;
		}

	} while (ch && ch == 'y');

	system("pause");
	return 0;
}