#include<iostream>
#include<string>
#include<stdexcept>

using std::cin; using std::cout; using std::endl; using std::string;

int main25() {
	
	for (int v1, v2; cout << "Input two integers:\n", cin >> v1 >> v2;) {
		try
		{
			if (v2 == 0)
				throw std::runtime_error("被除数不能为0");
			cout << v1 / v2 << endl;
		}
		catch (std::runtime_error err)
		{
			cout << err.what() << endl;
			cout << "Do you wanna try again?Enter yes or no" << endl;

			string word;
			cin >> word;
			if (!word.empty() && word == "no") {
				break;
			}
		}
	}

	

	system("pause");
	return 0;
}