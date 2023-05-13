#include <iostream>

int main(void) {

	int input_num1 = 0, input_num2 = 0;

	std::cout << "2개의 정수를 입력하십시오" << std::endl;
	std::cin >> input_num1 >> input_num2;

	if (input_num1 == input_num2) {

		std::cout << input_num1 << "은(는)" << input_num2 << "와(과) 같습니다." << std::endl;

	} else if (input_num1 > input_num2) {

		std::cout << input_num1 << "은(는)" << input_num2 << "보다 큽니다." << std::endl;

	} else {

		std::cout << input_num1 << "은(는)" << input_num2 << "보다 작습니다." << std::endl;

	}

	return 0;
}