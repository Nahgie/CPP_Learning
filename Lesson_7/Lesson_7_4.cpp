#include <iostream>

template <class T>
T squareTemplate(T x) { return x * x; }

int main() {

	int num = 0;
	double dnum = 0;

	std::cout << "������ �Ҽ��� �Է��ϼ��� (���� -> �Ҽ� ������ ����)" << std::endl;
	std::cin >> num >> dnum;

	std::cout << num << " �� ������ " << squareTemplate(num) << " �Դϴ�. \n" << dnum << " �� ������ " << squareTemplate(dnum) << " �Դϴ�." << std::endl;

	return 0;
}