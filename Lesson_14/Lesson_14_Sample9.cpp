#include <iostream>

class Base1 {
protected:
	int BS1{};

public:
	Base1(int B1 = 0) { BS1 = B1; }
	void showBS(); //showBS()선언

};

class Base2 {
protected:
	int BS2{};

public:
	Base2(int B2 = 0) { BS2 = B2; }
	void showBS();//Base2에도 showBS()선언

};

class Derived : public Base1, public Base2 {
protected:
	int DR{};

public:
	Derived(int D = 0) { DR = D; }
	void showDR();

};
void Base1::showBS() {

	std::cout << "BS1은" << BS1 << "입니다." << std::endl;
}

void Base2::showBS() {

	std::cout << "BS2는" << BS2 << "입니다." << std::endl;
}

void Derived::showDR() {

	std::cout << "DR은" << DR << "입니다." << std::endl;
}

int main() {

	Derived drv;
	drv.Base1::showBS(); //Base1에게 상속받은 멤버함수를 호출
	drv.Base2::showBS(); //Base2에게 상속받은 멤버함수를 호출
	drv.showDR();

	return 0;
}