#include<iostream>

int main31() {
	int ia[10];
	for (int i = 0; i != 10; ++i)
		ia[i] = i;

	for (auto i : ia)
		std::cout << i << " ";

	system("pause");
	return 0;
}