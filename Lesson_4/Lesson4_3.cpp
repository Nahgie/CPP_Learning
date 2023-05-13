#include <iostream>

int main() {

	int input_num = 0, result = 0;

	std::cout << "과목 1의 점수를 입력하십시오." << std::endl;
	std::cin >> input_num;
	result += input_num;

	std::cout << "과목 2의 점수를 입력하십시오." << std::endl;
	std::cin >> input_num;
	result += input_num;

	std::cout << "과목 3의 점수를 입력하십시오." << std::endl;
	std::cin >> input_num;
	result += input_num;

	std::cout << "과목 4의 점수를 입력하십시오." << std::endl;
	std::cin >> input_num;
	result += input_num;

	std::cout << "과목 5의 점수를 입력하십시오." << std::endl;
	std::cin >> input_num;
	result += input_num;

	std::cout << "5과목의 합계는 " << result << " 점입니다." << std::endl;
	std::cout << "5과목의 평균은 " << result / (float)5 << " 점입니다." << std::endl;


	return 0;
}