#include <iostream>
#include <vector>

int main(){
	int N;
	std::cin >> N;
	std::vector<int> C(N);
	for (int i = 0; i < N; i++){
		std::cin >> C[i];
	}
	std::vector<float> V;
	for (int i = 0; i < N; i++){
		std::cin >> V[i];
	}

	int max_C = 0;
	for (int i = 0; i < N; i++){
		if (C[i] > max_C){
			max_C = C[i];
		}
	}
	
	
	return 0;
}