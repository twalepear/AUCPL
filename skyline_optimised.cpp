#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> array(N);
	for (int i = 0; i < N; i++){
		cin >> array[i];
	}

	sort(array.begin(),array.end());

	int min_diff = 1e9; // max difference
	int b1 = 0;
	int b2 = 0;

	for (int i = 0; i < N-1; i++){
		int diff = array[i+1]-array[i];
		if (diff < min_diff){
			min_diff = diff;
			b1 = array[i];
			b2 = array[i+1];
		}
	}

	cout << b1 << " " << b2 << endl;

	return 0;
}