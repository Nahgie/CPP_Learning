#include <iostream>
#include <string>

int main() {

	const int sub = 2 , num = 5;
	std::string sub_type;

	int test_arr[sub][num] = { 
		// sub
		{80,60,22,50,75}  
		,
		//num
		{90,55,68,72,68} 
	};

	for (int i = 0 ;i < num ; i++) {
		for (int j = 0 ;j < sub ; j++) {
		
				sub_type = (j == 0) ? "국어" : "수학";
				std::cout << i + 1 << "번째 사람의" << sub_type << "점수는 " << test_arr[j][i] << "입니다." << std::endl;
			
		}
	}

	return 0;
}