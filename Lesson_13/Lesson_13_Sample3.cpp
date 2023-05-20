#include <iostream>

class Car {

private:

	int CarNum {};
	double LeftGas{};

public:

	Car();
	Car(int NUM , double GAS);

};

Car::Car() { //인자 없는 생성자

	CarNum = 0;
	LeftGas = 0;
	std::cout << "자동차가 만들어졌습니다." << std::endl;

}

Car::Car(int NUM, double GAS) { //인자를 2개를 받는 오버라이드 된 생성자

	CarNum = NUM;
	LeftGas = GAS;
	std::cout << "자동차가 만들어졌습니다. -> " << "차량 번호 " << NUM << " 연료량 " << GAS << std::endl;

}

int main() {

	Car seden_arr[3]{
		Car(), // 인자없는 생성자 호출
		Car(1432 , 14.8),	// 인자를 2개 받는 생성자 호출 
		Car(9182 , 58.2)	// 인자를 2개 받는 생성자 호출 
	};

	return 0;
}