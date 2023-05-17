#include <iostream>
#include <string>

int main() {

	char str0[20]{};
	char str1[10]{};
	char str2[10]{};

	strcpy_s(str1 , "Hello"); // str1 배열에 "Hello" 복사
	strcpy_s(str2 , "Goodbye"); // str2 배열에 "Goodbye" 복사
	strcpy_s(str0, str1); // str0에 str1(Hello)을 복사
	strcat_s(str0, str2); // str0에 복사된 str1값 뒤에 str2(Goodbye)를 추가

	std::cout << "배열 str1은(는) " << str1 << "입니다." << std::endl;
	std::cout << "배열 str2은(는) " << str2 << "입니다." << std::endl;

	std::cout << "연결하면 " << str0 << " 입니다." << std::endl;

	return 0;
}