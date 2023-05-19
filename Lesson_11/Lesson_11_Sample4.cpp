#include <iostream>

//구조체 Car의 선언
struct Car {

	int CarNum;
	double LeftGas;

};

//함수 선언
void show(Car c);

int main() {
	Car sedan = { 0,0 };

	std::cout << "차량번호와 연료량을 입력하세요" << std::endl;
	std::cin >> sedan.CarNum >> sedan.LeftGas;

	show(sedan);

	return 0;
}

void show(Car c) {

	std::cout << "차량번호 " << c.CarNum << " : 연료량 " << c.LeftGas << std::endl;

}