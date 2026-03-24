#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int main(){
	int N;
	std::cin >> N;
	std::vector<int> C(N);
	for (int i = 0; i < N; i++){
		std::cin >> C[i];
	}
	std::vector<float> V(N);
	for (int i = 0; i < N; i++){
		std::cin >> V[i];
	}

	float max_result = 0;
	for (int i = 0; i < N; i++){
		if (C[i]*V[i] > max_result){
			max_result = C[i]*V[i];
		}
	}
	std::cout << std::fixed << std::setprecision(3) << max_result << std::endl;

	return 0;
}