#include <iostream>

int main() {

	//vtc == 수직(VerTiCal) , hrzt == 수평(HoRiZonTal)
	for (int vtc = 0; vtc <= 4; vtc++) {
		for (int hrzt = 0; hrzt <= vtc; hrzt++) {

			std::cout << "*";

		}
		std::cout << "\n";
	}

	return 0;
}