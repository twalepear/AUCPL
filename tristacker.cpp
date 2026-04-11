#include <bits/stdc++.h>

int main(){
	int n;
	std::cin >> n;

	std::vector<int> x(n);
	for (int i = 0; i < n; i++){
		std::cin >> x[i];
		if (x[i] <= 0) {
			std::cout << "NO" << std::endl;
			return 0;
		}
	}

	int x_sum = 0;
	for (int i = 0; i < n; i++){
		x_sum += x[i];
	}
	
	int sum = 0;
	int check = x_sum;
	for (int i = 0; i < n; i++){
		sum += i+1;
		check -= i+1;
	}
	
	if (check != 0){
		std::cout << "NO" << std::endl;
		return 0;
	}


	if (n > 0 && x_sum == sum){
		std::cout << "YES" << std::endl;
	} else {
		std::cout << "NO" << std::endl;	
	}

	return 0;
}