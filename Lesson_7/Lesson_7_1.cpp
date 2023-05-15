#include <iostream>

int square(int x) { return x * x; }

int main() {

	int num = 0;

	std::cout << "정수를 입력하십시오." << std::endl;
	std::cin >> num;

	std::cout << num << "의 제곱은 " << square(num) << " 입니다." << std::endl;

	return 0;
}