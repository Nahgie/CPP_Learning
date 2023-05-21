#include <iostream>

class Point {
private:
	int x{};
	int y{};

public:
	Point operator--(); //전위 감소 연산자
	Point operator--(int D); //후위 감소 연산자
	friend Point operator-(Point P1, Point P2); // -
	friend Point operator-(Point P1, int A);
	friend Point operator-(int A, Point P);

};

Point Point::operator--() { //전위 감소 연산자를 정의 (--VAR;)
	x--;
	y--;
	return *this;
}

Point Point::operator--(int D) { //전위 감소 연산자를 정의 (VAR--;)
	Point P = *this;
	x--;
	y--;
	return P;
}


Point operator-(Point P1, Point P2) { // Point형 - Point형 연산자를 정의

	Point tmp;
	tmp.x = P1.x - P2.x;
	tmp.y = P1.y - P2.y;
	return tmp;
}

Point operator-(Point P1, int A) { // Point형 - 정수형 연산자를 정의

	Point tmp;
	tmp.x = P1.x - A;
	tmp.y = P1.y - A;
	return tmp;
}

Point operator-(int A, Point P) { // 정수형 - Point형의 연산자를 정의

	Point tmp;
	tmp.x = A - P.x;
	tmp.y = A - P.y;
	return tmp;
}