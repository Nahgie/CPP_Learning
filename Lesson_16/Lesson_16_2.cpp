//컴파일 후 프로젝트 폴더에 있는 Debug 폴더에서 콘솔(CMD or Windows PowerShell)로 실행해야함
#include <iostream>
#include <fstream>
#include <iomanip>

int main(int argc , char* argv[]) {

	if (argc != 2) { // 입력한 문자열의 갯수를 검사

		std::cout << "인수의 개수가 틀립니다." << std::endl;
		return 1;

	}

	std::ifstream ReadScoreData(argv[1]); // 입력받은 두 번째 문자열(파일 이름)을 사용해 파일오픈 
	if (!ReadScoreData) {

		std::cout << "파일을 열 수 없습니다." << std::endl;
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