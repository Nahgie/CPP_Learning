#include <iostream>
#include <fstream>

int main() {

	std::ofstream FileOut("test0.txt"); // 파일을 생성하고 열어봄
	if (!FileOut) {
		
		std::cout << "파일을 찾을 수 없습니다." << std::endl;
		return 1;

	} else {
	
		std::cout << "파일을 열었습니다." << std::endl;

	}

	FileOut.close(); // 파일을 닫음
	std::cout << "파일을 닫았습니다." << std::endl;

	return 0;
}