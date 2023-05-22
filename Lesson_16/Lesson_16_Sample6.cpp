#include <iostream>

int main() {

	std::cout.setf(std::ios::left, std::ios::adjustfield); // 출력을 왼쪽으로 정렬
	
	for (int i = 0; i <= 5; i++) {
		std::cout.width(5);
		std::cout.fill('-');
		std::cout << i;
	}

	std::cout << std::endl;
	std::cout.unsetf(std::ios::left); // 왼쪽정렬을 해제

	std::cout.setf(std::ios::right, std::ios::adjustfield); // 출력을 오른쪽으로 정렬
	
	for (int j = 0; j <= 5; j++) {
		std::cout.width(5);
		std::cout.fill('-');
		std::cout << j;
	}

	std::cout << std::endl;

	return 0;
}