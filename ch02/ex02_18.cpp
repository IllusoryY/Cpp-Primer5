#include <iostream>

int maintest() {
	int i = 1, val = 2;
	int *p1 = &val;

	*p1 = 24;
	p1 = &i;

	const int *p;

	return 0;
}