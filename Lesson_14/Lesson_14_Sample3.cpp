#include <iostream>

class Car {
protected: //private 대신 protected로 지정하면 파생클래스에서 접근 가능
	int CarNum{};
	double LeftGas{};

public:
	Car();
	void setCar(int NUM , double GAS);
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

	std::cout << "차량번호는 " << CarNum << " 연료량은 " << LeftGas << std::endl;

}

class RacingCar :public Car {
private:
	int course{};

public:
	RacingCar();
	void setCourse(int COURSE);
	void show();

};

RacingCar::RacingCar() {

	course = 0;
	std::cout << "레이싱 카가 만들어졌습니다." << std::endl;

}

void RacingCar::setCourse(int COURSE) {

	course = COURSE;
	std::cout << "코스 번호를 " << COURSE << " 로 정했습니다." << std::endl;

}

void RacingCar::show() { //Car 클래스의 데이터 멤버를 protected로 지정해서 접근가능 ( Car클래스의 show()를 오버라이딩함)

	std::cout << "레이싱 카의 차량 번호는 " << CarNum << " 입니다." << std::endl;
	std::cout << "연료량은 " << LeftGas << " 입니다." << std::endl;
	std::cout << "코스 번호는 " << course << " 입니다." << std::endl;

}

int main() {

	RacingCar RC;
	RC.setCar(5124 , 11.9);
	RC.setCourse(9);

	RC.show();

	return 0;
}