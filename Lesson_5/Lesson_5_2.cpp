#include <iostream>

int main(void) {

	int input_num1 = 0, input_num2 = 0;

	std::cout << "2���� ������ �Է��Ͻʽÿ�" << std::endl;
	std::cin >> input_num1 >> input_num2;

	if (input_num1 == input_num2) {

		std::cout << input_num1 << "��(��)" << input_num2 << "��(��) �����ϴ�." << std::endl;

	} else if (input_num1 > input_num2) {

		std::cout << input_num1 << "��(��)" << input_num2 << "���� Ů�ϴ�." << std::endl;

	} else {

		std::cout << input_num1 << "��(��)" << input_num2 << "���� �۽��ϴ�." << std::endl;

	}

	return 0;
}