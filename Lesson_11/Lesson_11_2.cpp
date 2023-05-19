#include <iostream>

struct Person {
	int Age;
	double Weight, Height;
};

inline void aging(Person* p) {

	std::cout << "1년이 지났습니다." << std::endl;
	p->Age++; //나이 한살 추가 [포인터는 멤버로 접근할때 .(도트 연산자) 대신 ->(화살표 연산자) 사용]
}

inline void ShowBodyData(Person* p) { 

	std::cout << "나이 " << p->Age << " 몸무게 " << p->Weight << " 키 " << p->Height << std::endl; //데이터 출력
}

int main() {

	Person m_data = { 0,0,0 };

	std::cout << "나이를 입력하십시오" << std::endl;
	std::cin >> m_data.Age;

	std::cout << "몸무게를 입력하십시오." << std::endl;
	std::cin >> m_data.Weight;

	std::cout << "키를 입력하십시오." << std::endl;
	std::cin >> m_data.Height;

	ShowBodyData(&m_data); //함수가 받는 인자형태가 포인터라서 &(주소 연산자)사용
	aging(&m_data);			//함수가 받는 인자형태가 포인터라서 &(주소 연산자)사용
	ShowBodyData(&m_data);

	return 0;
}