#include <iostream>

inline double GetTotalScore(int *pA) {

	int sum = 0;

	for (int i = 0; i < 5; i++) { 
		sum += pA[i]; //score_arr[0] 부터 score_arr[4] 까지 순차적으로 값을 대입
	}

	return sum;
}

int main() {

	int score_arr[5] = {};
	int human_counter = 0;

	std::cout << "5명의 시험 점수를 입력하십시오." << std::endl;
	
	for (human_counter = 0; human_counter < 5; human_counter++) {
		std::cin >> score_arr[human_counter];
	}

	//score_arr 이름(식별자)만 넣어주면 해당 배열의 첫 요소(score_arr[0])의 주소값이 전달됨
	std::cout << "5명의 평균 시험 점수는 " << GetTotalScore(score_arr) / human_counter << " 점 입니다." << std::endl;

	return 0;
}