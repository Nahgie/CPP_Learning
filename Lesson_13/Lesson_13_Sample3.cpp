#include <iostream>

class Car {

private:

	int CarNum {};
	double LeftGas{};

public:

	Car();
	Car(int NUM , double GAS);

};

Car::Car() { //���� ���� ������

	CarNum = 0;
	LeftGas = 0;
	std::cout << "�ڵ����� ����������ϴ�." << std::endl;

}

Car::Car(int NUM, double GAS) { //���ڸ� 2���� �޴� �������̵� �� ������

	CarNum = NUM;
	LeftGas = GAS;
	std::cout << "�ڵ����� ����������ϴ�. -> " << "���� ��ȣ " << NUM << " ���ᷮ " << GAS << std::endl;

}

int main() {

	Car seden_arr[3]{
		Car(), // ���ھ��� ������ ȣ��
		Car(1432 , 14.8),	// ���ڸ� 2�� �޴� ������ ȣ�� 
		Car(9182 , 58.2)	// ���ڸ� 2�� �޴� ������ ȣ�� 
	};

	return 0;
}