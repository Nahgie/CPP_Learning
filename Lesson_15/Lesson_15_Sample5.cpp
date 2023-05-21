#include <iostream>
#include <vector>

int main() {

	int num;
	std::vector<int> vt{}; // 벡터 선언

	std::cout << "몇 개의 정수 데이터를 입력하시겠습니까?" << std::endl;
	std::cin >> num;

	for (int i = 0; i < num; i++) {
		int data;
		std::cout << "정수를 입력하십시오" << std::endl;
		std::cin >> data;
		vt.push_back(data); //벡터 끝에 추가함
	}

	std::cout << "표시합니다." << std::endl;

	std::vector<int>::iterator it = vt.begin(); // 시작부분의 값을 알수있음
	while (it != vt.end()) { //끝부분의 값을 알수있음
		std::cout << *it;
		std::cout << "-";
		it++;
	}

	std::cout << std::endl;
}