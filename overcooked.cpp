#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int N, T;
	std::cin >> N >> T;
	std::vector<int> t(N);
	int sum = 0;
	int points = 0;
	std::sort(t.begin(),t.end());
	for(int i = 0; i < N; i++){
		std::cin >> t[i];
		sum += t[i];
		if (sum+i <= T){
			points = (i+1)*5;
		}
	}
	std::cout << points << std::endl;
	return 0;
}