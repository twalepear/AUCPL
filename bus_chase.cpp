#include <iostream>

int main(){
	int N, D, v1, v2;
	if (N && D && v1 && v2 <= 10e8) {
	std::cin >> N >> D >> v1 >> v2;
	}

	if (N/v1 <= (N-D)/v2){
		std::cout << "BUS" << std::endl;
	} else {
		std::cout << "WALK" << std::endl;
	}

	return 0;
}