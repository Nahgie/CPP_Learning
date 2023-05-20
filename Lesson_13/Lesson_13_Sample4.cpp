#include <iostream>

class Car {
private:
	int CarNum{};
	double LeftGas{};
public:
	Car();
	Car(int NUM , double GAS);
};

Car::Car() { //초기자 없이 배열을 생성하려면 인자가 없는 생성자가 반드시 필요

	CarNum = 0;
	LeftGas = 0;
	std::cout << "자동차가 만들어졌습니다." << std::endl;

}

Car::Car(int NUM, double GAS) { //인자를 받는 생성자

	CarNum = NUM;
	LeftGas = GAS;
	std::cout << "자동차가 만들어졌습니다. -> " << " 차량번호 " << NUM << " 연료량 " << GAS << std::endl;

}

int main() {

	Car sedan[3]; // 인수를 안넣으면 인자없는 생성자가 호출

	return 0;
}