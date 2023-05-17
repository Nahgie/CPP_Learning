#include <iostream>

int count(char str[] , char ch) {

	int i;
	int same_char_count = 0;

	for (i = 0; i < str[i]; i++) { //문자열 길이 탐색
		if (str[i] == ch) { same_char_count++; } // 문자열중 해당되는 문자가 있는지 확인 후 갯수를 저장
	}

	return same_char_count; // 검색한 문자의 갯수를 반환
}

int main() {

	char input_str[100] = {};
	char find_char = {};

	std::cout << "문자열을 입력하십시오." << std::endl;
	std::cin >> input_str;

	std::cout << "문자열에서 검색할 문자를 입력하십시오." << std::endl;
	std::cin >> find_char;

	std::cout << input_str << " 안에 " << find_char << " 은(는) 총 " <<  count(input_str , find_char) << " 개 있습니다." << std::endl;

	return 0;
}