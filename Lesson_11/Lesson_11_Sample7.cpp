#include <iostream>

union Years {
	int ad;
	int dangi;
};


int main() {

	Years m_year = { NULL };

	std::cout << "���⸦ �Է��ϼ���" << std::endl;
	std::cin >> m_year.ad;

	std::cout << "���� " << m_year.ad << " ��" << std::endl;
	std::cout << "�ܱ� ���� " << m_year.dangi << " ��" << std::endl;

	std::cout << "�ܱ⸦ �Է��ϼ���" << std::endl;
	std::cin >> m_year.dangi;

	std::cout << "�ܱ� " << m_year.dangi << " ��" << std::endl;
	std::cout << "���� ���� " << m_year.ad << " ��" << std::endl;

	return 0;
}