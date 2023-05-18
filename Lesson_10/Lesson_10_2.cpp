#include <iostream>
using namespace std;

int main() {

	int* pA;
	pA = new int; // 동적 메모리 할당
	*pA = 10;

	delete pA; //사용이 끝난 동적 메모리는 해제 해줘야함.

	return 0;
}