#include <iostream>
#include <fstream>

int main() {

	std::ifstream ReadData("test1.txt"); // 파일을 열어 ReadData 변수에 대입
	if (!ReadData) {
		std::cout << "파일을 읽을 수 없습니다." << std::endl;
		return 1;
	}

	char str1[16] , str2[16];

	ReadData >> str1 >> str2; // ReadData 변수에 대입된 값을 각각의 문자배열에 대입

	std::cout << "파일에 기록된 2개의 문자열은" << std::endl;
	std::cout << str1 << " , " << str2 << " 입니다." << std::endl; // 결과 출력

	return 0;
}