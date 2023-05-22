#include <iostream>

int main() {

	char ch;

	std::cout << "영문자를 입력하십시오" << std::endl;

	while (std::cin.get(ch)) { //EOF 입력시 while();종료
		std::cout.put(ch);
	}

	return 0;
}