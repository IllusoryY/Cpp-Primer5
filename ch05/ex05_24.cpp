#include<iostream>
#include<string>
#include<stdexcept>

using std::cin; using std::cout; using std::endl; using std::string;

int main24() {
	int v1, v2;

	cin >> v1 >> v2;
	if (v2 == 0)
		throw std::runtime_error("被除数不能为0");
	cout << v1 / v2 << endl;

	system("pause");
	return 0;
}