#include <iostream>
#include <string> //���ڿ� ó���� ���� ����

int main(void) {

	int input_num = 0;
	std::string show_text; //���ڿ� ���� �ֱ��� �ʱ�ȭ

	std::cout << "������ �Է��Ͻʽÿ�." << std::endl;
	std::cin >> input_num;

	show_text = (input_num % 2) ? "Ȧ��" : "¦��"; // Ȧ�� ¦�� ��

	std::cout << input_num << " ��(��) " << show_text << "�Դϴ�." << std::endl;


	return 0;
}