#include <iostream>

class Point {
private:
	int x{};
	int y{};

public:
	Point(int a = 0, int b = 0) { x = a; y = b; }
	Point operator+(Point p); // +연산자 함수를 선언

	int GetX() { return x; } // private: int x의 값을 가져오기 위한 멤버 함수
	int GetY() { return y; } // private: int y의 값을 가져오기 위한 멤버 함수
};
// (+연산자의 왼쪽 변수) , (+연산자의 오른쪽 변수) , (Point 클래스를 다루는 +연산자가 하는일을 정의)
Point Point::operator+(Point p) {

	Point tmp;
	tmp.x = x + p.x;
	tmp.y = y + p.y;

	return tmp;
}

int main() {

	//Point형의 객체 선언
	Point p1(1, 2);
	Point p2(3, 6);
	p1 = p1 + p2; //Point형 객체간 덧셈 연산


	std::cout <<  p1.GetX() << "," << p1.GetY() << std::endl; // 결과 출력

	return 0;
}