#include <iostream>

int main() {

	//vtc == ����(VerTiCal) , hrzt == ����(HoRiZonTal)
	for (int vtc = 0; vtc <= 4; vtc++) {
		for (int hrzt = 0; hrzt <= vtc; hrzt++) {

			std::cout << "*";

		}
		std::cout << "\n";
	}

	return 0;
}