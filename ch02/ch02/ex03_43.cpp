#include<iostream>

using std::cout;
using std::endl;

int main43() {
	int arr[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };

	// a range for to manage the iteration
	for (int(&row)[4] : arr)
		for (int col : row)
			cout << col << " ";
	cout << endl;

	//use index
	for (size_t i = 0; i != 3; ++i)
		for (size_t j = 0; j != 4; ++j)
			cout << arr[i][j] << " ";
	cout << endl;

	//use pointer
	for (int(*row)[4] = arr; row != arr + 3; ++row)
		for (int* col = *row; col != *row + 4; ++col)
			cout << *col << " ";
	cout << endl;

	system("pause");
	return 0;
}