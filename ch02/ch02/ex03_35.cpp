#include<iterator>

using std::begin;
using std::end;

int main35() {
	const int size = 10;
	int ia[size] = { 0,1,2,3,4,5,6,7,8,9 };

	for (int * it = begin(ia); it != end(ia); ++it)
		*it = 0;

	return 0;
}