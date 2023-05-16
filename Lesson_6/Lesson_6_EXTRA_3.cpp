#include <iostream>

inline void Nine_TimesTable(int x) {

	for (int lines = x; lines <= x; lines++) { //입력한 단만 출력
		for (int times = 1; times <= 9; times++) {

			std::cout << lines << " x " << times << " = " << lines * times << std::endl;

		}
	}

	//함수 중괄호
}

int main() {
	
	int num = 0;

	std::cout << "출력할 단수를 입력하세요" << std::endl;
	std::cin >> num;

	Nine_TimesTable(num); // 구구단 함수 호출

	if (num == 0) {return 0;} else {main();} // 0을 입력받으면 종료. 0이 아니라면 메인함수를 재귀호출

}