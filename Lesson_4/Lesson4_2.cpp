#include <iostream>

int main(void) {

	int input_num1 = 0, input_num2 = 0;

	std::cout << "삼각형의 높이를 입력하십시오" << std::endl;
	std::cin >> input_num1; 

	std::cout << "삼각형의 밑변을 입력하십시오" << std::endl;
	std::cin >> input_num2;

	std::cout << "\n" << "삼각형의 넓이는 " << (input_num1*input_num2) / (float)2 << "입니다.";


	return 0;
}