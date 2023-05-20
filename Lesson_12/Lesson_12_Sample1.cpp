#include <iostream> 

class Car {
	public:
		int CarNum;
		double LeftGas;
		void show ();
		void Show();
};

void Car::show() {

	std::cout << "차량 번호는 " << CarNum << " 입니다.\n" << "연료량은 " << LeftGas << " 입니다. " << std::endl;

}

int main() {

	Car* sedan; // Car sedan;
	Car* SUV; //Car SUV;

	sedan = new Car;
	SUV = new Car;

	sedan->CarNum = 4321; // sedan.CarNum = 4321;
	sedan->LeftGas = 51.8; //sedan.LeftGas = 51.8;

	SUV->CarNum = 5163; //SUV.CarNum = 5163;
	SUV->LeftGas = 88.2; //SUV.LeftGas = 88.2;

	sedan->show(); //sedan.show();
	SUV->show(); //SUV.show();

	delete sedan;
	delete SUV;

	return 0;
 }