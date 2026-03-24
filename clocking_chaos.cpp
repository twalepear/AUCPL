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
	std::vector<float> V;
	for (int i = 0; i < N; i++){
		std::cin >> V[i];
	}

	int max_C = 0;
	float max_V = 0;
	for (int i = 0; i < N; i++){
		if (C[i] > max_C){
			max_C = C[i];
		}
		if (V[i] > max_V){
			max_V = V[i];
	}
	float result = max_C * max_V;
	std::cout << std::fixed << std::setprecision(3) << result << std::endl;

	return 0;
}