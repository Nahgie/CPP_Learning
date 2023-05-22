#include <iostream>
#include <fstream>
#include <iomanip>

int main() {

	std::ofstream Student_Score_File("test2.txt");
	if (!Student_Score_File) {

		std::cout << "파일을 열 수 없습니다." << std::endl;
		return 1;
	
	} 
	
	const int num = 5;
	int test[num];

	std::cout << "5명의 점수를 입력하십시오." << std::endl;
	
	for (int i = 0; i < num; i++) {
		
		std::cin >> test[i];

	}

	for (int j = 0; j < num; j++) {

		Student_Score_File << "No." << j + 1 << std::setw(5) << test[j] << '\n'; // 파일에 데이터를 기록중 
		//No. nn 형식으로 저장됨

	}

	Student_Score_File.close();

	return 0;
}