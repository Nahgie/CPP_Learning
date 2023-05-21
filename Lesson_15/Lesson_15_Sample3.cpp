#define _CRT_SECURE_NO_WARNINGS //VS 최신버전 사용시 보안이슈로 인한 컴파일 에러 방지
#include <iostream>
#include <string>

class Car {
private:
	int num;
	double gas;
	char* pName;

public:
	Car(const char* pN, int n, double g);
	~Car();
	Car(const Car& c);
	Car& operator=(const Car& c);
};
      
Car::Car(const char* pN, int n, double g) {
	pName = new char[strlen(pN) + 1];
	strcpy(pName ,pN);
	num = n;
	gas = g;
	std::cout << pName << "를 생성했습니다." << std::endl;

}

Car::~Car() {
	
	std::cout << pName << "을 소멸시킵니다." << std::endl;
	delete[] pName;

}

Car::Car(const Car& c) {

	std::cout << c.pName << "로 초기화 합니다." << std::endl;
	pName = new char[strlen(c.pName) + strlen("의 카피본 1") + 1];
	strcpy(pName, c.pName);
	strcat(pName, "의 복사본 1");
	num = c.num;
	gas = c.gas;
}

Car& Car::operator=(const Car& c) {

	std::cout << pName << "에" << c.pName << "를 대입합니다." << std::endl;

	if (this != &c) {
		delete[] pName;
		pName = new char[strlen(c.pName) + strlen("의 복사본 2") + 1];
		strcpy(pName, c.pName);
		strcat(pName, "의 복사본 2");
		num = c.num;
		gas = c.gas;
	}

	return *this;

}

int main() {
	Car mycar("mycar", 1234, 25.5);

	Car car1 = mycar;
	
	Car car2("car2", 0, 0);
	car2 = mycar;

	return 0;

}


