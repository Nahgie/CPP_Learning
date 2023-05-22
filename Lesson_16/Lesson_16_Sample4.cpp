#include <iostream>

int main() {

	for (int i = 0; i <= 10; i++) {
		std::cout.width(3); // 출력 폭 3 지정
		std::cout.fill('-'); // 공백 문자를 '-'으로 채움
		std::cout << i;
	}

	std::cout << std::endl;

	return 0;
}