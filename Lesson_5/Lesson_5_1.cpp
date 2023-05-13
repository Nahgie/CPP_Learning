#include <iostream>


int main(void) {

	int input_num = 0;

	std::cout << "정수를 입력하십시오." << std::endl;
	std::cin >> input_num;

	if (input_num % 2) {
		
		std::cout << input_num << "은 홀수 입니다." << std::endl;
	
	} else {

		std::cout << input_num << "은 짝수 입니다." << std::endl;

	}

	return 0;
}