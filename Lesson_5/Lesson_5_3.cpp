#include <iostream>

int main(void) {

	int score = 0;

	std::cout << "������ �Է��Ͻʽÿ� (1 ~ 5 ���� �Է�)" << std::endl;
	std::cin >> score;


	if (score == 1) { // ���ǹ� SWITCH�� ��� IF�� ���

		std::cout << '\n' << "������ " << score << " �Դϴ�.\n����սô�." << std::endl;

	} else if (score == 2) {

		std::cout << '\n' << "������ " << score << " �Դϴ�.\n���� �� ����սô�." << std::endl;

	} else if (score == 3) {

		std::cout << '\n' << "������ " << score << " �Դϴ�.\n�� ���� ������ ��ǥ�� �սô�." << std::endl;

	} else if (score == 4) {

		std::cout << '\n' << "������ " << score << " �Դϴ�.\n�ſ� ���߽��ϴ�." << std::endl;

	} else if (score == 5) {

		std::cout << '\n' << "������ " << score << " �Դϴ�.\n�ſ� ����մϴ�." << std::endl;

	} else {

		std::cout << '\n' << "��ȿ�� ������ �ƴմϴ�." << std::endl;

	}

	return 0;

}