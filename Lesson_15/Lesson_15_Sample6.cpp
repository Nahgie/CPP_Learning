#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vt;
	for (int i = 0; i < 10; i++) {
		vt.push_back(i);
	}

	std::cout << "정렬하기 전 상태는";
	std::vector<int>::iterator it = vt.begin();
	while (it != vt.end()) {
		std::cout << *it;
		it++;
	}

	std::cout << "입니다.\n뒤집으면 " ;

	std::reverse(vt.begin(), vt.end()); // 뒤집기
	it = vt.begin();
	while (it != vt.end()) {
		std::cout << *it;
		it++;
	}

	std::cout << "입니다.\n정렬 후의 상태는 ";

	sort(vt.begin(), vt.end()); // 정렬
	it = vt.begin();
	while (it != vt.end()) {
		std::cout << *it;
		it++;
	}

	std::cout << "입니다." << std::endl;

	return 0;
}