#include <iostream>

int main() {

	for (int lines = 2; lines <= 9; lines++) { // 2�ܿ��� 9�� ���� ������ ��� (����)
		for (int times = 1; times <= 9; times++) {

			std::cout << lines << " x " << times << " = " << lines * times << std::endl;

		}
		std::cout << std::endl; //��� ���������� �������� ��������
	}

	return 0;
}