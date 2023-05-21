#include <iostream>
#include <typeinfo>

class Vehicle { //추상 클래스
protected:
	int Speed{};

public:
	void setSpeed(int SPEED);
	virtual void show() = 0; //순수 가상함수
};

class Car : public Vehicle { //추상 클래스 Vehicle로 부터 파생된 Car클래스
private:
	int CarNum{};
	double LeftGas{};

public:
	Car(int NUM, double GAS);
	void show(); //show() 멤버 함수를 가지고 있음

};

class Plane : public Vehicle { //추상 클래스 Vehicle로 부터 파생된 Plane 클래스
private:
	int Flight{};

public:
	Plane(int FLIGHT);
	void show(); //show() 멤버 함수를 가지고 있음

};

void Vehicle::setSpeed(int SPEED) {

	Speed = SPEED;
	std::cout << "속도를 " << SPEED << " 로 변경했습니다." << std::endl;

}

Car::Car(int NUM, double GAS) {

	CarNum = NUM;
	LeftGas = GAS;
	std::cout << "차량 번호가 " << NUM << " 이고 , 연료량이 " << GAS << " 인 자동차가 만들어졌습니다." << std::endl;

}

void Car::show() { //show() 멤버 함수 몸체구현

	std::cout << "차량 번호는 " << CarNum << " 입니다.\n연료량은 " << LeftGas << " 입니다.\n속도는 " << Speed << " 입니다." << std::endl;

}

Plane::Plane(int FLIGHT) {

	Flight = FLIGHT;
	std::cout << "비행기 번호가 " << FLIGHT << " 인 비행기가 만들어졌습니다." << std::endl;

}
void Plane::show() { //show() 멤버 함수 몸체구현

	std::cout << "비행기 번호는 " << Flight << " 입니다." << std::endl;
	std::cout << "속도는 " << Speed << " 입니다." << std::endl;

}


int main() {

	Vehicle* pVC[2];
	Car sedan(1234,20.5); //Car 클래스
	Plane P_747(232); // Plane 클래스

	pVC[0] = &sedan;
	pVC[1] = &P_747;

	for (int i = 0; i < 2; i++) {
		if (typeid(*pVC[i]) == typeid(Car)) { //클래스가 동일한지 확인
			std::cout << (i + 1) << "번째 객체는" << typeid(Car).name() << "의 객체입니다." << std::endl;
		} else { //클래스가 동일하지 않으면 출력
			std::cout << (i + 1) << "번째 객체는" << typeid(Car).name() << "의 객체가 아닙니다.\n" << typeid(*pVC[i]).name() << "의 객체입니다." << std::endl;

		}
	}

	return 0;
}