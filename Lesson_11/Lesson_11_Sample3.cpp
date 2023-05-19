#include <iostream>

struct Car {

	int CarNum;
	double LeftGas;

};

int main() {

	Car sedan = { 1212 , 31.9 };
	Car suv = {3391, 57.2};

	std::cout << "세단의 차량번호는 " << sedan.CarNum << " : " << "연료의 양은 " << sedan.LeftGas << "입니다." << std::endl;
	std::cout << "SUV의 차량번로는 " << suv.CarNum << " : " << "연료의 양은 " << suv.LeftGas << "입니다." << std::endl;

	suv = sedan;

	std::cout << "세단을 SUV에 대입했습니다." << std::endl;
	std::cout << "SUV의 차량번로는 " << suv.CarNum << " : " << "연료의 양은 " << suv.LeftGas << "입니다." << std::endl;

	return 0;
}