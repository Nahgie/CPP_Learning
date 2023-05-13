#include <iostream>

int main(void) {
	
	float input_pi = 3.14;

	std::cout << "원주율의 값은 얼마입니까?" << std::endl;
	std::cin >> input_pi;

	//입력한 값이 원주율(3.14)가 맞으면 입력받은 값을 출력

	if (abs(input_pi - 3.14) < FLT_EPSILON) { // 부동소수점 정확도 비교 및 값 확인

		std::cout << "원주율의 값은 " << input_pi << "입니다." << std::endl;

	} else {

		std::cout << input_pi << " 은(는) 원주율 값이 아닙니다." << std::endl;

	}

	return 0;

}