#include "inout.h"
#include <iostream>
using namespace std;

void print(const std::vector<int>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
	}
}