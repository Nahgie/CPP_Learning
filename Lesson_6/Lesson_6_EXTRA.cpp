#include <iostream>

int main() {

	for (int lines = 2; lines <= 9; lines++) { // 2단에서 9단 까지 구구단 출력 (세로)
		for (int times = 1; times <= 9; times++) {

			std::cout << lines << " x " << times << " = " << lines * times << std::endl;

		}
		std::cout << std::endl; //없어도 무관하지만 가독성이 안좋아짐
	}

	return 0;
}