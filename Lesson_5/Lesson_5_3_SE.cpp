#include <iostream>

int main(void) {

	int score = 0;

	std::cout << "������ �Է��Ͻʽÿ� (1 ~ 5 ���� �Է�)" << std::endl;
	std::cin >> score;

	switch (score) { //���ǹ� IF�� ��� SWITCH �� ���

	case 1:

		std::cout << '\n' << "������ " << score << " �Դϴ�.\n����սô�." << std::endl;
		break;

	case 2:

		std::cout << '\n' << "������ " << score << " �Դϴ�.\n���� �� ����սô�." << std::endl;
		break;

	case 3:

		std::cout << '\n' << "������ " << score << " �Դϴ�.\n�� ���� ������ ��ǥ�� �սô�." << std::endl;
		break;

	case 4:

		std::cout << '\n' << "������ " << score << " �Դϴ�.\n�ſ� ���߽��ϴ�." << std::endl;
		break;

	case 5:

		std::cout << '\n' << "������ " << score << " �Դϴ�.\n�ſ� ����մϴ�." << std::endl;
		break;

	default:

		std::cout << '\n' << "��ȿ�� ������ �ƴմϴ�." << std::endl;
		break;
	}

	return 0;

}