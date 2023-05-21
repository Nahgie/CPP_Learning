#include <iostream>

class Number {
private:
	int num;

public:
	Number() { num = 0; }
	Number(int n) { num = n; } // 변환 생성자
	operator int() { return num; } //변환 함수의 정의
	Number operator++();
	Number operator++(int d);
	Number operator--();
	Number operator--(int d);
};

Number Number::operator++() {

	num++;
	return *this;
}

Number Number::operator++(int d) {

	Number n = *this;
	num++;
	return n;
}

Number Number::operator--() {
	
	num--;
	return *this;
}

Number Number::operator--(int d) {

	Number n = *this;
	num--;
	return n;
}

int main() {

	Number n;
	
	n = 10;

	n++;
	++n;
	n--;
	--n;

	int i = n; // 따로 (int)n 을 명시 하지 않아도 알아서 형변환을 함

	std::cout << i << std::endl; //결과 출력

	return 0;
}
