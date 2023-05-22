//컴파일 후 프로젝트 폴더에 있는 Debug 폴더에서 콘솔(CMD or Windows PowerShell)로 실행해야함
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

	if (argc != 2) { // 입력한 문자열의 갯수를 검사
	
		std::cout << "인수의 개수가 틀립니다." << std::endl;
		return 1;
	
	}

	std::ifstream ReadStringData(argv[1]); // 입력받은 두 번째 문자열(파일 이름)을 사용해 파일오픈 
	if (!ReadStringData) {
		
		std::cout << "파일을 열 수 없습니다." << std::endl;
		return 1;

	}

	char ch;
	ReadStringData.get(ch); // 파일에서 문자 하나를 읽음
	
	while (!ReadStringData.eof()) { // 파일을 끝까지 읽을 동안 반복
		std::cout.put(ch); //입력받은 문자를 출력
		ReadStringData.get(ch); // 다음문자를 읽음
	}

	ReadStringData.close();

	return 0;
}