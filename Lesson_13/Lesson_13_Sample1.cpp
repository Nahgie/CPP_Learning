#include <iostream>

class Car {

	private:
		
		int CarNum{};
		double LeftGas{};
	
	public:

		Car(); // 생성자
		void show();
};

Car::Car() { //Private 데이터 멤버들 초기화 필수 (Default 값 지정)
		
	CarNum = 10; //초기값 10으로 지정
	LeftGas = 10; //초기값 10으로 지정
	std::cout << "자동차가 만들어졌습니다." << std::endl;

}

void Car::show() {

	std::cout << "차량 번호는 " << CarNum << " 입니다.\n" << "연료량은 " << LeftGas << " 입니다." << std::endl;
}

int main() {

	Car sedan; // Car객체 생성시 Car::Car(생성자) 호출됨

	sedan.show();

	return 0;
}