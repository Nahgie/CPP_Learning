#include <iostream>

int main() {

	std::cout.setf(std::ios::left, std::ios::adjustfield); // ����� �������� ����
	
	for (int i = 0; i <= 5; i++) {
		std::cout.width(5);
		std::cout.fill('-');
		std::cout << i;
	}

	std::cout << std::endl;
	std::cout.unsetf(std::ios::left); // ���������� ����

	std::cout.setf(std::ios::right, std::ios::adjustfield); // ����� ���������� ����
	
	for (int j = 0; j <= 5; j++) {
		std::cout.width(5);
		std::cout.fill('-');
		std::cout << j;
	}

	std::cout << std::endl;

	return 0;
}