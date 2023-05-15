#include <iostream>

template <class T>
T squareTemplate(T x) { return x * x; }

int main() {

	int num = 0;
	double dnum = 0;

	std::cout << "정수와 소수를 입력하세요 (정수 -> 소수 순서로 진행)" << std::endl;
	std::cin >> num >> dnum;

	std::cout << num << " 의 제곱은 " << squareTemplate(num) << " 입니다. \n" << dnum << " 의 제곱은 " << squareTemplate(dnum) << " 입니다." << std::endl;

	return 0;
}