#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

int main() {

	int i = 2, &r = i;
	auto a = r;

	const std::type_info& ti1 = typeid(i);
	const std::type_info& ti2 = typeid(r);


	if (ti1 == ti2) {
		cout << "are the same" << endl;
	}



}