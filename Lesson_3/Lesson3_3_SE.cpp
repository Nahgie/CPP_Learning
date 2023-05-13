#include <iostream>

int main(void) {

	float weight = 0, length = 0;

	std::cout << "키와 몸무게를 입력하십시오." << std::endl;
	std::cin >> length >> weight;

	// 입력받은 숫자가 0을 초과해야 출력

	if (length > 0 && weight > 0) {

		std::cout << "키는 " << length << "센티미터입니다." << '\n' << "몸무게는 " << weight << " 킬로그램입니다." << std::endl;
	
	} else {

		std::cout << "유효한 값이 들어있지 않아 프로그램을 종료합니다." << std::endl;

	}

	return 0;
}