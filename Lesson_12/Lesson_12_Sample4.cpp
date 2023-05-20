#include <iostream>


class Car {

private:

	int CarNum;
	double LeftGas;

public:

	int GetCarNum() { return CarNum; }
	double GetLeftGas() { return LeftGas; }
	void Show();
	void SetNumGas(int n, double g);

};

void Car::Show() {

	std::cout << "차량 번호는 " << CarNum << " 입니다.\n" << "연료량은" << LeftGas << " 입니다." << std::endl;

}

void Car::SetNumGas(int n, double g) {

	if (g > 0 && g < 1000) {

		CarNum = n;
		LeftGas = g;

		std::cout << "차량 번호를 " << CarNum << " 으로 , 연료량을 " << LeftGas << " 로 바꾸었습니다." << std::endl;

	}
	else {

		std::cout << g << " 는 올바른 연료량이 아닙니다." << std::endl;
		std::cout << "연료량을 바꿀 수 없습니다." << std::endl;

	}

}

void buy(Car* pCar); //포인터로 받음

int main() {

	Car sedan;

	sedan.SetNumGas(1541, 54.2);
	buy(&sedan);


	return 0;
}

void buy(Car* pCar) { //포인터로 받음

	int n = pCar->GetCarNum();
	double g = pCar->GetLeftGas();

	std::cout << "차량 번호가 " << n << " 이며, 연료량이 " << g << " 인 자동차를 구매했습니다." << std::endl;

}