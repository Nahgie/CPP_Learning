#include <iostream>

int main(void) {

	float input_pi = 3.14;

	std::cout << "원주율의 값은 얼마입니까?" << std::endl;
	std::cin >> input_pi;
	std::cout << "원주율의 값은 " << input_pi << "입니다." << std::endl;

	return 0;

}