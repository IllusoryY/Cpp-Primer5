#include"Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main() {
	Sales_item currItem;
	
	if (cin >> currItem) {
		int occu = 1;
		Sales_item valItem;

		while (cin >> valItem) {
			if (currItem.same_isbn(valItem)) {
				++occu;
			}
			else {
				cout << currItem << " occurs " << occu << " times " << endl;
				currItem = valItem;
				occu = 1;
			}
		}
		cout << currItem << " occurs " << occu << " times " << endl;
	}
	else {
		cerr << "No data?" << endl;
		return -1;
	}
	return 0;
}