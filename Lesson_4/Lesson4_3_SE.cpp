#include <iostream>

int main() {

	int input_sub = 0  , result = 0;


	for (int sub_count = 1; sub_count <= 5; sub_count++) {

		std::cout << "���� " << sub_count << "�� ������ �Է��Ͻʽÿ�." << std::endl;
		std::cin >> input_sub;
		result += input_sub;

		if (sub_count == 5) std::cout << sub_count << "������ �հ�� " << result << " ���Դϴ�." << "\n" << sub_count << "������ ����� " << result / (float)sub_count << " ���Դϴ�." << std::endl;

	}

	return 0;
}