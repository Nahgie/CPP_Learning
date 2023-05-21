#include <iostream>

class Car {
protected:
	int CarNum {};
	double LeftGas{};

public:
	Car();
	void setCar(int NUM, double GAS);
	virtual void show();

};

class RacingCar :public Car {
private:
	int course{};

public:
	RacingCar();
	void setCourse(int COURSE);
	void show();

};

Car::Car() {

	CarNum = 0;
	LeftGas = 0;
	std::cout << "자동차가 만들어졌습니다." << std::endl;

}

void Car::setCar(int NUM, double GAS) {

	CarNum = NUM;
	LeftGas = GAS;
	std::cout << "차량 번호를 " << NUM << " 연료량을 " << GAS << " 로 바꿨습니다." << std::endl;

}

void Car::show() {

	std::cout << "차량 번호는 " << CarNum << " 연료량은 " << LeftGas << " 입니다. " << std::endl;

}

RacingCar::RacingCar() {

	course = 0;
	std::cout << "레이싱 카가 만들어졌습니다." << std::endl;

}

void RacingCar::setCourse(int COURSE) {

	course = COURSE;
	std::cout << "코스 번호를 " << COURSE << "로 정했습니다." << std::endl;

}

void RacingCar::show() {

	std::cout << "레이싱 카의 차량번호는 " << CarNum << " 입니다." << std::endl;
	std::cout << "연료량은 " << LeftGas << " 입니다." << std::endl;
	std::cout << "코스 번호는 " << course << " 입니다." << std::endl;

}

int main() {
	
	Car* pCars[2];

	Car sedan;
	RacingCar RC;

	pCars[0] = &sedan;
	pCars[0]->setCar(1122,11.2);

	pCars[1] = &RC;
	pCars[1]->setCar(3344, 33.4);

	for (int i = 0; i < 2; i++) {
		pCars[i]->show();
	}

	return 0;
}