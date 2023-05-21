#include <iostream>

class Base0 {
protected:
	int BS0 {};

public:
	Base0(int B0 = 0) { BS0 = B0; }
	void showBS0();
};

class Base1 : public virtual Base0 { //Base0을 가상 기본 클래스로 상속
protected:
	int BS1 {};

public:
	Base1(int B1 = 0) { BS1 = B1; }
	void showBS1();
};

class Base2 : public virtual Base0 { //Base0을 가상 기본 클래스로 상속
protected:
	int BS2{};

public:
	Base2(int B2 = 0) { BS2 = B2; }
	void showBS2();
};

class Derived : public Base1, public Base2 { // Base1 , Base2를 상속 (클래스 2개 상속받음)
protected:
	int DR{};

public:
	Derived(int D = 0) { DR = D; }
	void showDR();
};

void Base0::showBS0() {

	std::cout << "BS0은" << BS0 << "입니다." << std::endl;

}

void Base1::showBS1() {

	std::cout << "BS1은" << BS1 << "입니다." << std::endl;

}

void Base2::showBS2() {

	std::cout << "BS2는" << BS2 << "입니다." << std::endl;

}

void Derived::showDR() {

	std::cout << "DR은" << DR << "입니다." << std::endl;

}

int main() {

	Derived drv;

	drv.showBS0(); // 가상 기본 클래스 Base0으로 부터 상속 받은 멤버 함수를 호출

	return 0;
}