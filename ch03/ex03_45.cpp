#include<iostream>

using std::cout;
using std::endl;

int main() {
	int arr[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };

	// a range for to manage the iteration
	for(auto& row:arr)
		for(int col:row)
			cout << col << " ";
	cout << endl;

	//use index
	for (size_t i = 0; i != 3; ++i)
		for (size_t j = 0; j != 4; ++j)
			cout << arr[i][j] << " ";
	cout << endl;

	//use pointer
	for (auto row = arr; row != arr + 3; ++row)
		for (auto col = *row; col != *row + 4; ++col)
			cout << *col << " ";
	cout << endl;

	system("pause");
	return 0;
}