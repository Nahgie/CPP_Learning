#include <iostream>
#include <string> //문자열 처리를 위해 선언

int main(void) {

	int input_num = 0;
	std::string show_text; //문자열 값을 넣기전 초기화

	std::cout << "정수를 입력하십시오." << std::endl;
	std::cin >> input_num;

	show_text = (input_num % 2) ? "홀수" : "짝수"; // 홀수 짝수 비교

	std::cout << input_num << " 은(는) " << show_text << "입니다." << std::endl;


	return 0;
}