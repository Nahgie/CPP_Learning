#include <iostream>

int main() {

	int i;
	double d;
	char str[100];

	//다양한 형의 입출력이 가능
	std::cout << "정수를 입력하십시오" << std::endl;
	std::cin >> i;

	std::cout << "정수를 입력하십시오" << std::endl;
	std::cin >> d;

	std::cout << "정수를 입력하십시오" << std::endl;
	std::cin >> str;


	std::cout << "입력한 정수 값은 " << i << "입니다." << std::endl;
	std::cout << "입력한 실수 값은 " << d << "입니다." << std::endl;
	std::cout << "입력한 문자열 값은 " << str << "입니다." << std::endl;

	return 0;
}