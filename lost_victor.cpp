#include <bits/stdc++.h>

int main(){
	int n;
	std::cin >> n;

	int max_count = 0;
	int max_count_sum = 0;
	for (int i=0; i < n; i++){
		std::vector<int> v(6);
		int count = 0;
		int sum = 0;
		for (int j=0; j < 6; j++){
			std::cin >> v[j];
			if (v[j] > 0){
				sum += v[j];
				count++ ;
			}
		}
		if (count > max_count){
			max_count = count;
			max_count_sum = sum;
			} else if (count == max_count){
				if (max_count_sum > sum){
				max_count_sum = sum;
				max_count = count;
				}
		}
	}

	std::cout << max_count << " " << max_count_sum << std::endl;

	return 0;
}