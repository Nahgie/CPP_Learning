#include <iostream>

int main() {

	for (int times = 1; times <= 9; times++) { // 2�ܿ��� 9�� ���� ������ ��� (����)
		for (int lines = 2; lines <= 9; lines++) {

			std::cout << lines << " x " << times << " = " << lines * times << "\t";

		}
		std::cout << '\n';
	}

	return 0;
}