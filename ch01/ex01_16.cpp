#include<iostream>

int main() {
	std::cout << "Please enter numbers,I will show you the sum of your input!";
	int sum = 0;
	for (int val = 0; std::cin >> val; sum += val) {}

	std::cout << "The sum of your input is: " << sum;
	return 0;
}