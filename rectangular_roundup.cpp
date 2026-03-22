#include <iostream>
#include <vector>

int main(){
	int n;
	std::cin >> n;

	int min_left = 10e5;
	int max_right = -10e5;
	int max_top = -10e5;
	int min_bottom = 10e5;

	for (int i=0; i < n; i++){
		std::vector<int> v(2);
		for (int j=0; j < 2; j++){
			std::cin >> v[j];
			if (n == 1){
				min_left = v[0];
				max_right = v[0];
				max_top = v[1];
				min_bottom = v[1];
			}
			if (v[0] > max_right){
				max_right = v[0];
			}
			if (v[0] < min_left){
				min_left = v[0];
			}
			if (v[1] < min_bottom){
				min_bottom = v[1];
			}
			if (v[1] > max_top){
				max_top = v[1];
			}
		}
	}
	
	// bottom-left corner
	std::cout << min_left << " " << min_bottom << std::endl;
	// top-left corner
	std::cout << min_left << " " << max_top << std::endl;
	// top-right corner
	std::cout << max_right << " " << max_top << std::endl;
	// bottom-right corner
	std::cout << max_right << " " << min_bottom << std::endl;
	return 0;
}