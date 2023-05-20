#include <iostream>

class Point { //Point 클래스 선언

private:

	int x_Axis; //private 데이터 멤버 x_Axis 선언
	int y_Axis; //private 데이터 멤버 y_Axis 선언

public:
	void setX(int a); // x_Axis에 값을 넣을 함수원형을 선언
	void setY(int b); // y_Axis에 값을 넣을 함수원형을 선언
	int Get_X() { return x_Axis; } // private 데이터 멤버 x_Axis의 값을 불러옴
	int Get_Y() { return y_Axis; } // private 데이터 멤버 y_Axis의 값을 불러옴

};

void Point::setX(int a) { //Point 클래스에 선언된 setX 함수

	if (a < 0 || a > 10) { // 0미만 10초과의 수를 입력받으면 0을 대입

		x_Axis = 0;

	}
	else { // 0미만 10초과의 수가 아니라면 사용자에게 입력받은 값을 대입

		x_Axis = a;
	}

}

void Point::setY(int b) { //Point 클래스에 선언된 setY 함수

	if (b < 0 || b > 10) { // 0미만 10초과의 수를 입력받으면 0을 대입

		y_Axis = 0;

	}
	else { // 0미만 10초과의 수가 아니라면 사용자에게 입력받은 값을 대입

		y_Axis = b;

	}

}