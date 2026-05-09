#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> array(N);
	for (int i = 0; i < N; i++){
		cin >> array[i];
	}
	int min_diff = 1e9; // max difference
	int b1 = 0;
	int b2 = 0;

	for (int i = 0; i < N-1; i++){
		for (int j = i+1; j < N; j++){ // don't forget to change the i to j's in second loop!!
			int diff = abs(array[i]-array[j]);
			if (diff < min_diff){
				min_diff = diff;
				b1 = min(array[i], array[j]);
				b2 = max(array[i], array[j]);
			}
		}
	}

	cout << b1 << " " << b2 << endl;

	return 0;
}