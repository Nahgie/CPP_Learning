#include <iostream>

int main() {

	std::cout << "--"; // 1 앞에 들어갈 --
	
	for (int i = 1; i < 31; i++) {
		std::cout << i;
		std::cout.width(3); // 출력 폭 3
		std::cout.fill('-'); // 공백을 '-' 으로 채움

		if ((i % 5) == 0) { std::cout << std::endl; } // 5의 배수마다 개행
	}

	return 0;
}