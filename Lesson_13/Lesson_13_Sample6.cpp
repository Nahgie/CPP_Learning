#include <iostream>

class Car {
private:
	int CarNum{};
	double LeftGas{};

public:
	static int Sum; // 정적 데이터 멤버 선언
	Car();
	void setCar(int NUM , double GAS);
	static void showSum(); // 정적 멤버함수 선언
};

Car::Car() {
	
	CarNum = 0;
	LeftGas = 0;
	Sum++; // 생성자 호출시 데이터 멤버 Sum에 1씩 값을 더함
	std::cout << "자동차가 만들어졌습니다." << std::endl;

}

void Car::setCar(int NUM, double GAS) {

	CarNum = NUM;
	LeftGas = GAS;
	std::cout << "차량 번호를 " << NUM << " 으로, 연료량을 " << GAS << "으로 바꿨습니다." << std::endl;

}

void Car::showSum() {

	std::cout << "자동차는 모두 " << Sum << "대 있습니다." << std::endl; // 정적 멤버함수에서는 정적 데이터 멤버 말고는 접근할 수 없음

}

int Car::Sum = 0; // 정적 데이터 멤버 초기화

int main() {

	Car::showSum(); // 자동차 대수를 알아보는 용도로 정적 멤버함수를 호출 (== 생성된 객체의 갯수를 알바보는 용도)

	Car sedan; // 자동차 생성( 객체 생성)
	sedan.setCar(5412, 22.7); // 자동차 번호와 연료량을 기입

	Car::showSum(); // 자동차 대수를 알아보는 용도로 정적 멤버함수를 호출 (== 생성된 객체의 갯수를 알바보는 용도)

	Car SUV; // 자동차 생성( 객체 생성)
	SUV.setCar(3214, 84.1); // 자동차 번호와 연료량을 기입
	
	Car::showSum(); // 자동차 대수를 알아보는 용도로 정적 멤버함수를 호출 (== 생성된 객체의 갯수를 알바보는 용도)

	return 0;
}