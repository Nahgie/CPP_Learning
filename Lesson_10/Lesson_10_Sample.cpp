#include <iostream>
#include "Lesson_10_Sample_Func.h"

int main() {

	int num1 = 0, num2 = 0;

	std::cout << "두개의 정수를 입력하십시오" << std::endl;
	std::cin >> num1 >> num2;

	std::cout << "최댓값은 " << max(num1, num2) << " 입니다." << std::endl;

	return 0;
}