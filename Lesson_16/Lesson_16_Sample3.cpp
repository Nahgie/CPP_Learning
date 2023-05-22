#include <iostream>

int main() {

	for (int i = 0; i <= 10; i++) {
		std::cout.width(3); // 출력 폭을 3으로 지정
		std::cout << i;
	}

	std::cout << std::endl;

	return 0;
}