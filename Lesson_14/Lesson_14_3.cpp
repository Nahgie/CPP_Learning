#include <iostream>

using namespace std;

class Base1 {
protected:
	int bs1;

public:
	Base1(int b1 = 0) { bs1 = b1; } // 생성자 중괄호는 세미콜론을 붙히지 않음
	void showBs();
};

class Base2 {
protected:
	int bs2;

public:
	Base2(int b2 = 0) { bs2 = b2; } // 생성자 중괄호는 세미콜론을 붙히지 않음
	void showBs();
};

void Base1::showBs() {

	cout << "bs1는" << bs1 << "입니다.\n";

}

void Base2::showBs() {

	cout << "bs2는" << bs2 << "입니다.\n";
}

class Derived : public Base1, public Base2 {
protected:
	int dr;

public:
	Derived(int d = 0) { dr = d; }
	void showDr();
};

void Derived::showDr() {

	cout << "dr은" << dr << "입니다.\n";

}

int main() {

	Derived drv;
	drv.Base1::showBs(); //모호성을 없애기 위해 스코프 연산자로 지정 해줘야함
	drv.Base2::showBs(); //모호성을 없애기 위해 스코프 연산자로 지정 해줘야함
	drv.showDr();

}