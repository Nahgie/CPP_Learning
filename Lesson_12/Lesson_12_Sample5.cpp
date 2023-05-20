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

	std::cout << "���� ��ȣ�� " << CarNum << " �Դϴ�.\n" << "���ᷮ��" << LeftGas << " �Դϴ�." << std::endl;

}

void Car::SetNumGas(int n, double g) {

	if (g > 0 && g < 1000) {

		CarNum = n;
		LeftGas = g;

		std::cout << "���� ��ȣ�� " << CarNum << " ���� , ���ᷮ�� " << LeftGas << " �� �ٲپ����ϴ�." << std::endl;

	}
	else {

		std::cout << g << " �� �ùٸ� ���ᷮ�� �ƴմϴ�." << std::endl;
		std::cout << "���ᷮ�� �ٲ� �� �����ϴ�." << std::endl;

	}

}

void buy(Car &frCar); //���۷����� ����

int main() {

	Car sedan;

	sedan.SetNumGas(1541, 54.2);
	buy(sedan);

	return 0;
}

void buy(Car &frCar) { //���۷����� ����

	int n = frCar.GetCarNum();
	double g = frCar.GetLeftGas();

	std::cout << "���� ��ȣ�� " << n << " �̸�, ���ᷮ�� " << g << " �� �ڵ����� �����߽��ϴ�." << std::endl;

}