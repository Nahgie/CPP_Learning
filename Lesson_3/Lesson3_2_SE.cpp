#include <iostream>


int main(void) {
	
	char input_alphabet;

	std::cout << "알파벳 첫 글자는 무엇입니까?" << std::endl;
	std::cin >> input_alphabet;

	// 입력한 알파벳이 a(A)가 맞으면 입력 받은 값을 출력

	if (input_alphabet == 'a' || input_alphabet == 'A') { //알파벳 첫 글자가 a(A)인지 확인

		std::cout << "알파벳 첫 글자는 " << input_alphabet << "입니다.";
	
	} else {

		std::cout << input_alphabet << " 은(는) 알파벳의 첫 글자가 아닙니다." << std::endl;

	}
	return 0;
}