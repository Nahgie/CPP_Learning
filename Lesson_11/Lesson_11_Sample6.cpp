#include <iostream>

struct Car {
	int CarNum;
	double LeftGas;

};

void Show(Car & rCar) {

	std::cout << "차량번호 : " << rCar.CarNum << " 연료량 : " << rCar.LeftGas << std::endl; // 레퍼런스는 ->(화살표 연산자)대신 .(도트 연산자)를 사용

}

int main() {

	Car sedan = { 0,0 };

	std::cout << "차량번호와 연료량을 입력하세요" << std::endl;
	std::cin >> sedan.CarNum >> sedan.LeftGas;

	Show(sedan);

	return 0;
}