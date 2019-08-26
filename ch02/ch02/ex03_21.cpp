#include<iostream>
#include<vector>
#include<string>

using std::endl;
using std::cout;
using std::string;
using std::vector;

void check_and_print(const vector<int>& ivec)
{
	cout << "size: " << ivec.size() << "\tcontens:[";
	for (auto it = ivec.begin(); it != ivec.end(); it++)
		cout << *it << (it != ivec.end() - 1 ? "," : "");
	cout << "]" << endl;
}

void check_and_print(const vector<string>& svec)
{
	cout << "size: " << svec.size() << "\tcontens:[";
	for (auto it = svec.begin(); it != svec.end(); it++)
		cout << *it << (it != svec.end() - 1 ? "," : "");
	cout << "]" << endl;
}

int main21() {
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };

	check_and_print(v1);
	check_and_print(v2);
	check_and_print(v3);
	check_and_print(v4);
	check_and_print(v5);
	check_and_print(v6);
	check_and_print(v7);

	system("pause");
	return 0;
}