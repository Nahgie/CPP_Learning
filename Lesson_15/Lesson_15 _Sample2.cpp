#define _CRT_SECURE_NO_WARNINGS //VS 최신버전 사용시 보안이슈로 인한 컴파일 에러 방지
#include <iostream>

class Car {
private:
	int num;
	double gas;
	char* pName;
public:
	Car(const char* pN, int n, double g); //예제에 적혀있는 Car::Car(const char* pN, int n, double g); 로 선언시 컴파일에러 뜸 (덤으로 char* pN도 문제가 생겨 const char* pN으로 수정)
	~Car();
	void show();
};

Car::Car(const char* pN, int n, double g) {
	
	pName = new char[strlen(pN) + 1];
	strcpy(pName,pN); //  strcpy()가 #define _CRT_SECURE_NO_WARNINGS 전처리 없이 사용되면 컴파일 안됨
	num = n;
	gas = g;
	std::cout << pName << "를 생성했습니다." << std::endl;

}

Car::~Car() {
	
	std::cout << pName << "를 소멸시킵니다." << std::endl;
	delete[] pName;
}

void Car::show() {

	std::cout << "차량 번호는 " << num << " 연료량은 " << gas << " 이름은 " << pName << std::endl;

}

int main() {

	Car car1("MyCar", 1234, 25.5);
	car1.show();

	return 0;
}