#include <iostream>

union Years {
	int ad;
	int dangi;
};


int main() {

	Years m_year = { NULL };

	std::cout << "서기를 입력하세요" << std::endl;
	std::cin >> m_year.ad;

	std::cout << "서기 " << m_year.ad << " 년" << std::endl;
	std::cout << "단기 또한 " << m_year.dangi << " 년" << std::endl;

	std::cout << "단기를 입력하세요" << std::endl;
	std::cin >> m_year.dangi;

	std::cout << "단기 " << m_year.dangi << " 년" << std::endl;
	std::cout << "서기 또한 " << m_year.ad << " 년" << std::endl;

	return 0;
}