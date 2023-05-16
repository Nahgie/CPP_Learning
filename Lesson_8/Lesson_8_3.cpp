#include <iostream>

inline void scoreCalc(int& rA, int& rB, int x) { // 인자를 레퍼런스로 받음

	rA += x; 
	rB += x; 

}

int main() {

	int sub_1 = 0, sub_2 = 0, scoreAdd = 0;

	std::cout << "2과목 분의 점수를 입력하십시오." << std::endl;
	std::cin >> sub_1 >> sub_2;

	std::cout << "더할 점수를 입력하십시오." << std::endl;
	std::cin >> scoreAdd;

	scoreCalc(sub_1, sub_2, scoreAdd); //포인터와는 다르게 레퍼런스는 주소연산자가 필요 없어서 제외

	std::cout << scoreAdd << " 점을 더했으므로 \n" << "과목 1은(는) " << sub_1 << " 점이 되었습니다. \n" << "과목 2은(는) " << sub_2 << " 점이 되었습니다." << std::endl;

	return 0;
}