#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;

//在c++的函数里面，如果把一个数组作为参数传进去，那么这个数组就会退化为一个指针，因而就不知道这个数组的长度

//pb指向数组的开始，pe指向数组的末尾
bool compareArray(int* const pb1 , int* const pe1,int* const pb2,int* const pe2) {
	//计算大小
	if ((pe1 - pb1) != (pe2 - pb2))
		return false;
	else
		for (int* i = pb1, *j = pb2; i != pe1 && j != pe2; ++i, ++j)
			if (*i != *j) return false;
	return true;
	
}

int main36() {
	int arr1[3] = { 0, 1, 4 };
	int arr2[3] = { 0, 2, 4 };

	if (compareArray(begin(arr1),end(arr1),begin(arr2),end(arr2)))
		cout << "The two arrays are equal." << endl;
	else
		cout << "The two arrays are not equal." << endl;


	cout << "==========" << endl;

	vector<int> vec1 = { 0, 1, 2 };
	vector<int> vec2 = { 0, 1, 2 };

	if (vec1 == vec2)
		cout << "The two vectors are equal." << endl;
	else
		cout << "The two vectors are not equal." << endl;

	system("pause");
	return 0;
}