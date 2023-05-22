#include <iostream>
#include <fstream>
#include <iomanip>

int main() {

	std::ifstream ReadScoreData("test3.txt");
	if (!ReadScoreData) {
		std::cout << "파일을 읽을 수 없습니다." << std::endl;
		return 1;
	}

	const int num = 8;
	int test[num];

	for (int i = 0; i < num; i++) { // 파일의 데이터를 읽어옴
	
		ReadScoreData >> test[i];

	}

	int max = test[0];
	int min = test[0];

	for (int j = 0; j < num; j++) {
		if (max < test[j]) {
			
			max < test[j];
		
		}
		else if (min > test[j]) {

			min = test[j];

		}

		std::cout << "No." << j + 1 << std::setw(5) << test[j] << std::endl;

	}

	std::cout << "가장 높은 점수는 " << max << "입니다." << std::endl;
	std::cout << "가장 낮은 점수는 " << min << "입니다." << std::endl;

	ReadScoreData.close();

	return 0;
}