#include <iostream>

struct Car {
	int CarNum;
	double LeftGas;

};

void Show(Car & rCar) {

	std::cout << "������ȣ : " << rCar.CarNum << " ���ᷮ : " << rCar.LeftGas << std::endl; // ���۷����� ->(ȭ��ǥ ������)��� .(��Ʈ ������)�� ���

}

int main() {

	Car sedan = { 0,0 };

	std::cout << "������ȣ�� ���ᷮ�� �Է��ϼ���" << std::endl;
	std::cin >> sedan.CarNum >> sedan.LeftGas;

	Show(sedan);

	return 0;
}