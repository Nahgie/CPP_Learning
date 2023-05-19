#include <iostream>

struct Person {
	
	int Age;
	double Weight , Height;

};

void ShowBodyData(Person pBD[]) {

	for (int j = 0; j < 2; j++) {

		std::cout << "나이 " << pBD[j].Age << " 몸무게 " << pBD[j].Weight << " 키 " << pBD[j].Height << std::endl; //각각 저장된 데이터를 출력

	}

}

int main() {

	Person P_Data[2] = {0,0,0}; // Person 구조체형을 배열로 선언 및 초기화

	for (int i = 0; i < 2; i++) {

		std::cout << "나이를 입력하십시오." << std::endl;
		std::cin >> P_Data[i].Age; // .(도트 연산자)로 P_Data의 Person 구조체형 멤버 Age에 입력된 값으로 대입

		std::cout << "몸무게를 입력하십시오." << std::endl;
		std::cin >> P_Data[i].Weight;// .(도트 연산자)로 P_Data의 Person 구조체형 멤버 Weight에 입력된 값으로 대입

		std::cout << "키를 입력하십시오." << std::endl;
		std::cin >> P_Data[i].Height;// .(도트 연산자)로 P_Data의 Person 구조체형 멤버 Height에 입력된 값으로 대입

	}

	ShowBodyData(P_Data); //출력함수 호출

	return 0;
}