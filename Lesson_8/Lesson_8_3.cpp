#include <iostream>

inline void scoreCalc(int& rA, int& rB, int x) { // ���ڸ� ���۷����� ����

	rA += x; 
	rB += x; 

}

int main() {

	int sub_1 = 0, sub_2 = 0, scoreAdd = 0;

	std::cout << "2���� ���� ������ �Է��Ͻʽÿ�." << std::endl;
	std::cin >> sub_1 >> sub_2;

	std::cout << "���� ������ �Է��Ͻʽÿ�." << std::endl;
	std::cin >> scoreAdd;

	scoreCalc(sub_1, sub_2, scoreAdd); //�����Ϳʹ� �ٸ��� ���۷����� �ּҿ����ڰ� �ʿ� ��� ����

	std::cout << scoreAdd << " ���� �������Ƿ� \n" << "���� 1��(��) " << sub_1 << " ���� �Ǿ����ϴ�. \n" << "���� 2��(��) " << sub_2 << " ���� �Ǿ����ϴ�." << std::endl;

	return 0;
}