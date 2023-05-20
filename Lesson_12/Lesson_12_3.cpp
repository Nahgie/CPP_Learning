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

inline void ShowAxis(Point* pAxis) { //인자값을 포인터로 받음

	// 해당 클래스의 public 멤버함수 Get_X와 Get_Y를 통해 private 데이터 멤버 x_Axis와 y_Axis에 접근후 값을 불러와 출력
	std::cout << "좌표는" << "(" << pAxis->Get_X() << "," << pAxis->Get_Y() << ")" << "입니다." << std::endl;

}

int main() {

	int x = 0, y = 0;
	Point Axis; //Point 클래스 형(Type)의 변수를 선언

	std::cout << "X 좌표를 입력하십시오." << std::endl;
	std::cin >> x;

	std::cout << "Y 좌표를 입력하십시오." << std::endl;
	std::cin >> y;

	Axis.setX(x); //setX 함수에 입력받은 x 값을 넘김
	Axis.setY(y); //setY 함수에 입력받은 y 값을 넘김

	ShowAxis(&Axis); //ShowAxis함수에 Point형 Axis변수의 주소값(함수가 포인터를 인자값으로 받음)을 넘겨 결과를 출력

	return 0;
}