#include <iostream>

//짧은 함수라 인라인함수로 사용
inline int square(int x) { return x * x; }
inline double square(double x) { return x * x; }

int main() {

	int num = 0;
	double dnum = 0;

	std::cout << "정수를 입력하십시오." << std::endl;
	std::cin >> num;

	std::cout << num << "의 제곱은 " << square(num) << " 입니다." << std::endl; //정수입력의 결과

	std::cout << "소수를 입력하십시오." << std::endl;
	std::cin >> dnum;

	std::cout << dnum << "의 제곱은 " << square(dnum) << "입니다." << std::endl; //실수입력의 결과

	return 0;
}