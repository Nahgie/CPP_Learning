#include <iostream>

class Point {
private:
	int x{};
	int y{};

public:
	Point(int A = 0, int B = 0) { x = A; y = B; }
	void SetX(int A) { x = A; }
	void SetY(int B) { y = B; }
	void show() { std::cout << "X : " << x << " Y : " << y << std::endl; }
	//여러개의 연산자를 오버로드
	Point operator++();
	Point operator++(int D);
	friend Point operator+(Point P1, Point P2);
	friend Point operator+(Point P1, int A);
	friend Point operator+(int A, Point P);

};

Point Point::operator++() { //전위 증가 연산자를 정의 (++VAR;)
	x++;
	y++;
	return *this;
}

Point Point::operator++(int D) { // 후위 증가 연산자를 정의 (VAR++;)
	Point P = *this;
	x++;
	y++;
	return P;
}

Point operator+(Point P1, Point P2) { // Point형 + Point형 연산자를 정의

	Point tmp;
	tmp.x = P1.x + P2.x;
	tmp.y = P1.y + P2.y;
	return tmp;
}

Point operator+(Point P1, int A) { // Point형 + 정수형 연산자를 정의

	Point tmp;
	tmp.x = P1.x + A;
	tmp.y = P1.y + A;
	return tmp;
}

Point operator+(int A, Point P) { // 정수형 + Point형의 연산자를 정의

	Point tmp;
	tmp.x = A + P.x;
	tmp.y = A + P.y;
	return tmp;
}

int main() {

	Point p1(1, 2);
	Point p2(3, 6);

	//위에서 정의한 연산자를 사용
	p1 = p1 + p2;
	p1++;
	p1 = p1 + 3;
	p2 = 3 + p2;

	p1.show();
	p2.show();

	return 0;
}