#include<iostream>

int main() {
	int v1 = 0, v2 = 0;

	std::cout << "Please enter two integers: " << std::endl;
	std::cin >> v1 >> v2;

	//判断两数的大小
	if (v1 > v2) {
		while (v1 >= v2) {
			std::cout << v2++ << std::endl;
		}
	}
	else if (v1 == v2) {
		std::cout << "The two number is equal." << std::endl;
	}
	else {
		while (v1 <= v2) {
			std::cout << v1++ << std::endl;
		}
	}
	return 0;
}