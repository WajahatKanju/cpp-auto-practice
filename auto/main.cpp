#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

int main() {

	int i = 2, &r = i;
	auto a = r;
	cout << "Hello World! " << i << endl;
}