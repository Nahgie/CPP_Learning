#include <iostream>

class Car {

private:

	int CarNum {}; // 구조체(struct)나 class의 데이터 멤버를 초기화 시킬땐 {}(중괄호를 사용)
	double LeftGas {}; // 구조체(struct)나 class의 데이터 멤버를 초기화 시킬땐 {}(중괄호를 사용)

public:

	Car(); // 생성자
	Car(int NUM, double GAS); // 오버로드된 생성자

};

Car::Car() { //인자에 인수값이 들어오면 호출

	int CarNum = 0;
	double LeftGas = 0;
	std::cout << "자동차가 만들어졌습니다." << std::endl;

}

Car::Car(int NUM , double GAS) { //인자에 인수값이 들어오면 호출

	int CarNum = NUM; // 입력된 인수값으로 초기화
	double LeftGas = GAS; // 입력된 인수값으로 초기화
	std::cout << "자동차가 만들어졌습니다. -> " << "차량번호는 " << NUM << " 연료량은 " << GAS << " 입니다." << std::endl;

}

int main() {

	Car sedan;
	Car SUV(3148,82.1); //인수값을 넣고 생성시 인자를 받는 함수로 호출

	return 0;
}