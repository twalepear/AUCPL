#include <iostream>
#include <string>

int main(){
	std::string s;
	std::cin >> s;
	int output = 0;

	for (unsigned i = 0; i < s.size(); i++){
		if (s[i] == 6 && s[i+1] == 7){
			output++;
			s.erase(i,2);
		}
	}
	std::cout << output << std::endl;

	return 0;
}