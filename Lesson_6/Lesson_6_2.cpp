#include <iostream>

int main() {

	int i_score = 0 ,t_score = 0;

	std::cout << "���� ������ �Է��Ͻʽÿ�. (0���� ����)" << std::endl;

	do {
		std::cin >> i_score;
		t_score += i_score; // �Է¹��� ������ ��Ż���ھ� ������ ����(����)

			if (i_score == false) { // 0 == false , 1 == true
		
				std::cout << "���� ������ �հ�� " << t_score << "�Դϴ�." << std::endl;
				break;

			}

	} while (i_score != 0); // 0 �Է½� ����

	return 0;
}