#include<iostream>

int main() {
	//使用for循环重写练习9、10、11

	//9
	int sum = 0;
	for (int val = 50; val <= 100; val++) {
		sum += val;
	}
	std::cout << "The sum of 50 to 100 is: " << sum << std::endl;

	//10
	for (int val = 10; val > 0; val--) {
		std::cout << val << std::endl;
	}

	//11
	std::cout << "Please enter two intgers: ";
	int v1 = 0, v2 = 0;

	std::cin >> v1 >> v2;
	if (v1 > v2) {
		for (; v1 >= v2; v2++)
			std::cout << v2 << std::endl;
	}
	else if (v1 == v2) {
		std::cout << "The two number is equal." << std::endl;
	}
	else {
		for (; v1 <= v2; v1++)
			std::cout << v1 << std::endl;
	}

	return 0;
}