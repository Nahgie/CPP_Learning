#include <iostream>

int max(int x[]) {
	
	int tmp = 0; // 임시 저장소

	for (int i = 0; i < x[i]; i++) { // 배열 길이 탐색
		if (x[0] < x[i]){ // 배열 탐색중 가장 높은 점수를 x[0]번 기준으로 순차 정렬
			tmp = x[0];
			x[0] = x[i];
			x[i] = tmp;

		}
	
	}
	return x[0];
}

int main() {

	int score_array[5]{};

	std::cout << "시험 점수를 입력하십시오." << std::endl;

	for (int score_count = 0; score_count < 5; score_count++) {
		std::cin >> score_array[score_count];
	}

	std::cout << "가장 높은 점수는 " << max(score_array) << " 점입니다" << std::endl;

	return 0;
}