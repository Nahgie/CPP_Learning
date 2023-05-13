#include <iostream>

int main(void) {

	int score = 0;

	std::cout << "성적을 입력하십시오 (1 ~ 5 정수 입력)" << std::endl;
	std::cin >> score;

	switch (score) { //조건문 IF문 대신 SWITCH 문 사용

	case 1:

		std::cout << '\n' << "성적은 " << score << " 입니다.\n노력합시다." << std::endl;
		break;

	case 2:

		std::cout << '\n' << "성적은 " << score << " 입니다.\n조금 더 노력합시다." << std::endl;
		break;

	case 3:

		std::cout << '\n' << "성적은 " << score << " 입니다.\n더 높은 점수를 목표로 합시다." << std::endl;
		break;

	case 4:

		std::cout << '\n' << "성적은 " << score << " 입니다.\n매우 잘했습니다." << std::endl;
		break;

	case 5:

		std::cout << '\n' << "성적은 " << score << " 입니다.\n매우 우수합니다." << std::endl;
		break;

	default:

		std::cout << '\n' << "유효한 점수가 아닙니다." << std::endl;
		break;
	}

	return 0;

}