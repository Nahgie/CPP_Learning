#include <iostream>

class Car {
private:
	int CarNum{};
	double LeftGas{};
public:
	Car(int NUM = 0, double GAS = 0); // 기본 인수를 클래스 선언할때 기입
};

Car::Car(int NUM, double GAS) {

	CarNum = NUM;
	LeftGas = GAS;
	std::cout << "자동차가 만들어졌습니다. -> " << " 차량번호 " << NUM << " 연료량 " << GAS << std::endl;

}

int main() {

	Car sedan; // 인수를 넘기지 않아도 인자없는 생성자가 있을때랑 동일하게 객체가 생성됨
	Car SUV(5342, 39.1); // 인수를 넘기면 인수값이 반영되어 객체가 생성됨

	return 0;
}