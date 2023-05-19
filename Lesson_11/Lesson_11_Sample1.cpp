#include <iostream>

enum Weeks {SUN , MON , TUE , WED , THU , FRI , SAT};

int main() {

	Weeks w;
	w = SUN;

	switch (w) {
	
	case SUN: std::cout << "일요일입니다." << std::endl; break;
	case MON: std::cout << "월요일입니다." << std::endl; break;
	case TUE: std::cout << "화요일입니다." << std::endl; break;
	case WED: std::cout << "수요일입니다." << std::endl; break;
	case THU: std::cout << "목요일입니다." << std::endl; break;
	case FRI: std::cout << "금요일입니다." << std::endl; break;
	case SAT: std::cout << "토요일입니다." << std::endl; break;
	default: std::cout << "무슨 요일인지 알 수 없습니다." << std::endl; break;

	}

	return 0;
}