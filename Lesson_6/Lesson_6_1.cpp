#include <iostream>

int main() {

	std::cout << "1~10까지의 짝수를 출력합니다." << std::endl;

	for (int count = 1; count <= 10; count++) {

		if (count % 2) {/*홀수는 출력 하지 않음*/ } else { std::cout << count << std::endl; } // 짝수는 출력함

	}

	return 0;
}