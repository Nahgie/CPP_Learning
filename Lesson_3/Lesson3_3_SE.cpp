#include <iostream>

int main(void) {

	float weight = 0, length = 0;

	std::cout << "Ű�� �����Ը� �Է��Ͻʽÿ�." << std::endl;
	std::cin >> length >> weight;

	// �Է¹��� ���ڰ� 0�� �ʰ��ؾ� ���

	if (length > 0 && weight > 0) {

		std::cout << "Ű�� " << length << "��Ƽ�����Դϴ�." << '\n' << "�����Դ� " << weight << " ų�α׷��Դϴ�." << std::endl;
	
	} else {

		std::cout << "��ȿ�� ���� ������� �ʾ� ���α׷��� �����մϴ�." << std::endl;

	}

	return 0;
}