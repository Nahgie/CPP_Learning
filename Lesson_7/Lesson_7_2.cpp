#include <iostream>

int square(int x) { return x * x; }
double square(double x) { return x * x; }

int main() {

	int num = 0;
	double dnum = 0;

	std::cout << "������ �Է��Ͻʽÿ�." << std::endl;
	std::cin >> num;

	std::cout << num << "�� ������ " << square(num) << " �Դϴ�." << std::endl; //�����Է��� ���

	std::cout << "�Ҽ��� �Է��Ͻʽÿ�." << std::endl;
	std::cin >> dnum;

	std::cout << dnum << "�� ������ " << square(dnum) << "�Դϴ�." << std::endl; //�Ǽ��Է��� ���

	return 0;
}