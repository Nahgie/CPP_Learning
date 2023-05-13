#include <iostream>

int main() {

	int input_sub = 0  , result = 0;


	for (int sub_count = 1; sub_count <= 5; sub_count++) {

		std::cout << "과목 " << sub_count << "의 점수를 입력하십시오." << std::endl;
		std::cin >> input_sub;
		result += input_sub;

		if (sub_count == 5) std::cout << sub_count << "과목의 합계는 " << result << " 점입니다." << "\n" << sub_count << "과목의 평균은 " << result / (float)sub_count << " 점입니다." << std::endl;

	}

	return 0;
}