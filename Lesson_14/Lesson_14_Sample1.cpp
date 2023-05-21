#include <iostream>

class Car {
private:
	int CarNum{};
	double LeftGas{};

public:
	Car(int NUM = 0 , double GAS = 0);
	void setCar(int S_NUM , double S_GAS);
	void show();
};

Car::Car(int NUM , double GAS) {

	CarNum = 6123;
	LeftGas = 55.5;
	std::cout << "자동차가 만들어졌습니다. -> " << " 차량번호 " << NUM << " 연료량 " << GAS << std::endl;

}

class RacingCar:public Car { //파생클래스 선언 Car클래스 상속
private:
	int course{};

public:
	RacingCar();
	void setCourse(int C);

};

void Car::setCar(int S_NUM, double S_GAS) {

	CarNum = S_NUM;
	LeftGas = S_GAS;
	std::cout << "차량 번호를 " << S_NUM << " 으로 바꿨습니다.\n연료량을 " << S_GAS << "으로 바꿨습니다." << std::endl;

}

void Car::show() {

	std::cout << "차량번호는 " << CarNum << " 입니다.\n연료량은 " << LeftGas << " 입니다." << std::endl;

}


RacingCar::RacingCar(){

	course = 0;
	std::cout << "레이싱카가 만들어졌습니다." << std::endl;

}

void RacingCar::setCourse(int C) {

	course = C;
	std::cout << "코스 번호를 " << course << " 로 정했습니다." << std::endl;

}


int main() {

	RacingCar RC;

	RC.setCar(3131,91.2);
	RC.setCourse(5);


	return 0;
}