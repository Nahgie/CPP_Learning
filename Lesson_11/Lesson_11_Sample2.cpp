#include <iostream>

struct Car {
	
	int CarNum;
	double LeftGas;

};

int main() {

	Car sedan;

	std::cout << "차량번호와 연료량을 입력하십시오" << std::endl;
	std::cin >> sedan.CarNum >> sedan.LeftGas;

	std::cout << "차량번로는 " << sedan.CarNum << " : " << "연료량은 " << sedan.LeftGas << " 입니다." << std::endl;

	return 0;
}