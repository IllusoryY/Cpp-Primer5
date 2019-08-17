#include"Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main() {
	Sales_item item1, item2;

	while (cin >> item1 >> item2) {
		if (item1.same_isbn(item2)) cout << item1 + item2 << endl;
		else
		{
			cerr << "The ISBN have to same!";
			return -1;
		}
	}
	return 0;
}