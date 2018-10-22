#include <iostream>
#include <string>

template <class T>
void addMe(T input1, T input2) {
	T sum;
	sum = input1 + input2;
	std::cout << input1 << " + " << input2 << " = " << sum << std::endl;
}

template <>
class 

int main() {
	std::string wow = "Wow";
	std::string zers = "zers!";
	addMe(wow, zers);
	addMe(15, 16);
	addMe(15.16, 16.15);

	return 0;
}