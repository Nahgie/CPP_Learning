#include <iostream>

int main() {

	int input_num = 0, result = 0;

	std::cout << "���� 1�� ������ �Է��Ͻʽÿ�." << std::endl;
	std::cin >> input_num;
	result += input_num;

	std::cout << "���� 2�� ������ �Է��Ͻʽÿ�." << std::endl;
	std::cin >> input_num;
	result += input_num;

	std::cout << "���� 3�� ������ �Է��Ͻʽÿ�." << std::endl;
	std::cin >> input_num;
	result += input_num;

	std::cout << "���� 4�� ������ �Է��Ͻʽÿ�." << std::endl;
	std::cin >> input_num;
	result += input_num;

	std::cout << "���� 5�� ������ �Է��Ͻʽÿ�." << std::endl;
	std::cin >> input_num;
	result += input_num;

	std::cout << "5������ �հ�� " << result << " ���Դϴ�." << std::endl;
	std::cout << "5������ ����� " << result / (float)5 << " ���Դϴ�." << std::endl;


	return 0;
}