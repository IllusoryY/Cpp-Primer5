#include"Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
	Sales_item total;

	if (cin >> total) {
		Sales_item trans;

		while (cin >> trans) {
			if (total.isbn == trans.isbn) {
				total += trans;
			}
			else {
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;
	}
	else {
		std::cerr << "No data?" << endl;
		return -1;
	}
	return 0;
}