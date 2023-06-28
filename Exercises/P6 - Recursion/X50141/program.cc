#include<iostream>

using namespace std;

int max(int x) {
	int max = 0;
	while (x > 0) {
		if (max < x%10) max = x%10;
		x /= 10;
	}
	return max;
}


int fatten(int x) {
	if (x < 10) return x;
	else return max(x) + 10*fatten(x/10);
}

int main() {
	int x;
	while(cin >> x) cout << fatten(x) << endl;
}
