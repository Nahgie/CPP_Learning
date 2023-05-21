#include <iostream>

class Base1 {
protected:
	int BS1{};

public:
	Base1(int B1 = 0) { BS1 = B1; }
	void showBS1();

};

class Base2 {
protected:
	int BS2{};

public:
	Base2(int B2 = 0) { BS2 = B2; }
	void  showBS2();

};

class Derived : public Base1, public Base2 { // 클래스 두개를 상속받음
protected:
	int DR{};
	
public:
	Derived(int D = 0) { DR = D; };
	void showDR();

};

void Base1::showBS1() {

	std::cout << "BS1은 " << BS1 << "입니다." << std::endl;

}

void Base2::showBS2() {

	std::cout << "BS2는 " << BS2 << "입니다." << std::endl;

}

void Derived::showDR() {

	std::cout << "DR은 " << DR << "입니다." << std::endl;

}

int main() {

	Derived drv;

	drv.showBS1();
	drv.showBS2();
	drv.showDR();
	
	return 0;
}


