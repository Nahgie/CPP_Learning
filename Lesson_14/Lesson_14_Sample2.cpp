#include <iostream>

class Car {
private:
	int CarNum{};
	double LeftGas{};

public:
	Car();
	Car(int NUM , double GAS);
	void setCar(int NUM , double GAS);
	void show() { std::cout << "차량번호는 " << CarNum << " 입니다. 연료량은 " << LeftGas << " 입니다." << std::endl; };

};

Car::Car() {

	CarNum = 0;
	LeftGas = 0;
	std::cout << "자동차가 만들어졌습니다." << std::endl;

}

Car::Car(int NUM, double GAS) {

	CarNum = 3246;
	LeftGas = 91.2;
	std::cout << "자동차가 만들어졌습니다. -> " << "차량 번호 " << NUM << " 연료량 " << GAS << std::endl;

}

void Car::setCar(int NUM, double GAS) {

	CarNum = NUM;
	LeftGas = GAS;
	std::cout << "차량 번호를 " << NUM << " 으로 , 연료량을 " << GAS << " 으로 바꿨습니다." << std::endl;

}

class RacingCar : public Car {
private:
	int course{};

public:
	RacingCar();
	RacingCar(int NUM , double GAS , int COURSE);
	void setCourse(int COURSE);

};

RacingCar::RacingCar() {

	course = 0;
	std::cout << "코스 번호가 " << course << " 인 레이싱 카가 만들어졌습니다." << std::endl;

}

RacingCar::RacingCar(int NUM, double GAS, int COURSE) :Car(NUM , GAS) {// Car클래스의 인자값을 2개 받는 생성자를 호출

	course = COURSE;
	std::cout << "코스 번호가 " << COURSE << " 인 레이싱 카가 만들어졌습니다." << std::endl;

}

void RacingCar::setCourse(int COURSE) {

	course = COURSE;
	std::cout << "코스 번호를 " << COURSE << "로 정했습니다." << std::endl;
}

int main() {

	RacingCar RC(9142, 31.2, 3);

	return 0;
}