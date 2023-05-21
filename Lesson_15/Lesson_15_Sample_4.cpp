#include <iostream>

template <class T> // 클래스 템플릿
class Array {
private:
	T data[5];

public:
	void setData(int num, T d);
	T getData(int num);
};

// 클래스 템플릿 멤버 함수 정의
template <class T> 
void Array<T>::setData(int num , T d){
	
	if (num < 0 || num > 4) {
		std::cout << " 배열 길이를 넘어섰습니다." << std::endl;

	} else {

		data[num] = d;

	}

}

template <class T>
T Array<T>::getData(int num) {

	if (num < 0 || num > 4) {
		std::cout << " 배열 길이를 넘어섰습니다." << std::endl;
		return data[0];
	}
	else {

		return data[num];
	}
}
// 클래스 템플릿 멤버 함수 정의

int main() {
	
	std::cout << "int 형 배열을 생성합니다." << std::endl; // 정수형을 다루는 클래스 객체를 생성
	Array<int> i_array{};
	i_array.setData(0, 80);
	i_array.setData(1, 60);
	i_array.setData(2, 58);
	i_array.setData(3, 77);
	i_array.setData(4, 57);

	for (int i = 0; i < 5; i++) {
		std::cout << i_array.getData(i) << std::endl;
	}

	std::cout << "double 형 배열을 생성합니다." << std::endl; // 실수형을 다루는 클래스 객체를 생성
	Array<double> j_array{};
	j_array.setData(0, 35.5);
	j_array.setData(1, 45.6);
	j_array.setData(2, 26.8);
	j_array.setData(3, 76.2);
	j_array.setData(4, 85.5);

	for (int j = 0; j < 5; j++) {
		std::cout << j_array.getData(j) << std::endl;
	}

	return 0;
}