#include <iostream>

int main(void) {

	int input_num1 = 0, input_num2 = 0;

	std::cout << "�ﰢ���� ���̸� �Է��Ͻʽÿ�" << std::endl;
	std::cin >> input_num1; 

	std::cout << "�ﰢ���� �غ��� �Է��Ͻʽÿ�" << std::endl;
	std::cin >> input_num2;

	std::cout << "\n" << "�ﰢ���� ���̴� " << (input_num1*input_num2) / (float)2 << "�Դϴ�.";


	return 0;
}