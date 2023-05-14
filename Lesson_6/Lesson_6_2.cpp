#include <iostream>

int main() {

	int i_score = 0 ,t_score = 0;

	std::cout << "시험 점수를 입력하십시오. (0으로 종료)" << std::endl;

	do {
		std::cin >> i_score;
		t_score += i_score; // 입력받은 점수를 토탈스코어 변수에 저장(대입)

			if (i_score == false) { // 0 == false , 1 == true
		
				std::cout << "시험 점수의 합계는 " << t_score << "입니다." << std::endl;
				break;

			}

	} while (i_score != 0); // 0 입력시 종료

	return 0;
}