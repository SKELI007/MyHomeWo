#include "inout.h"
#include <iostream>
using namespace std;

void read(std::vector<int>& vec) {
	int s;
	cout << "enter size vector:";
	cin >> s;
	vec.resize(s);
	cout << "\nenter numbers vector:";
	for (int i = 0; i < s; i++) {
		int x;
		std::cin >> x;
		vec.push_back(x);
	}
}