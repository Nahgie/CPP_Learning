#include <iostream>

struct Car {
	int CarNum;
	double LeftGas;
};

void show(Car* pCar) {

	std::cout << "차량번호 " << pCar->CarNum << " : 연료량 " << pCar->LeftGas << std::endl; //포인터는 .(도트 연산자) 대신 ->(화살표 연산자)사용

}

int main() {

	Car sedan = { 0,0 };

	std::cout << "차량번호와 연료량을 입력하세요" << std::endl;
	std::cin >> sedan.CarNum >> sedan.LeftGas;

	show(&sedan);

	return 0;
}