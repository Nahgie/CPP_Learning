#include <iostream>


int main(void) {
	
	char input_alphabet;

	std::cout << "���ĺ� ù ���ڴ� �����Դϱ�?" << std::endl;
	std::cin >> input_alphabet;

	// �Է��� ���ĺ��� a(A)�� ������ �Է� ���� ���� ���

	if (input_alphabet == 'a' || input_alphabet == 'A') { //���ĺ� ù ���ڰ� a(A)���� Ȯ��

		std::cout << "���ĺ� ù ���ڴ� " << input_alphabet << "�Դϴ�.";
	
	} else {

		std::cout << input_alphabet << " ��(��) ���ĺ��� ù ���ڰ� �ƴմϴ�." << std::endl;

	}
	return 0;
}