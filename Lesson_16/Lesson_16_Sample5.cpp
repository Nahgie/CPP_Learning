#include <iostream>

int main() {

	double pi = 3.141592;
	int num;

	std::cout << "원주율을 출력합니다." << std::endl;
	std::cout << "소수점 몇 번째까지 출력하시겠습니까?" << std::endl;
	std::cin >> num;

	std::cout.precision(num); // 부동소수점 출력 자릿수 지정

	std::cout << "원주율은" << pi << "입니다." << std::endl;

	return 0;
}