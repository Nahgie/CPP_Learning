#include <iostream>

int main() {
	int num = 0;
	std::cout << "1~9까지의 숫자를 입력하십시오" << std::endl;
	std::cin >> num;


	try {
		if (num <= 0) {
			throw "0 이하의 수가 입력되었습니다.";
		}if (num >= 10) {
			throw "10 이상의 수가 입력되었습니다.";
		}
	} catch (const char* err) { // char* err 그대로 사용시 메모리 에러 뜸 

		std::cout << "에러 : " << err << std::endl;
		return 1;

	}

	return 0;
}