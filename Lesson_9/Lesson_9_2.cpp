#include <iostream>

int length(char* str) {
	
	int i;

	for (i = 0; i < str[i]; i++) {} // 포인터가 배열을 가리키므로 [](첨자 연산자) 사용

	return i;
}

int main() {

	char input_str[100] = {};

	std::cout << "문자열을 입력하십시오." << std::endl;
	std::cin >> input_str;

	std::cout << "문자열의 길이는 " << length(input_str) << "입니다." << std::endl;

	return 0;
}