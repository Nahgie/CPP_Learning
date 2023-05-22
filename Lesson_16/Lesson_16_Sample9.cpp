#include <iostream>
#include <iomanip>

int main() {

	for (int i = 0; i <= 10; i++) {

		std::cout << std::setw(3) << i; // std::setw()와 std::cout.width()는 출력 결과가 똑같다
	}

	std::cout << std::endl;

	return 0;
}