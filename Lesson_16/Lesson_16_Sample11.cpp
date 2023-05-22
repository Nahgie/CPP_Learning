#include <iostream>
#include <fstream>

int main() {

	std::ofstream FileData("test1.txt");
	if (!FileData) {

		std::cout << "파일을 열 수 없습니다." << std::endl;
		return 1;

	} else {
		
		std::cout << "파일을 열었습니다." << std::endl;

	}

	//test1.txt 파일에 아래의 문자열을 기록함 (출력)
	FileData << "Hello! \n";
	FileData << "GoodBye! \n";
	
	std::cout << "파일에 기록했습니다." << std::endl;

	FileData.close();
	std::cout << "파일을 닫았습니다." << std::endl;

	return 0;
}