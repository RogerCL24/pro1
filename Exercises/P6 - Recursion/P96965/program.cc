#include<iostream>

using namespace std;

int sum_of_digits(int x) {
	if (x < 10) return x;
	else return x%10 + sum_of_digits(x/10);
}

int reduction_of_digits(int x) {
	if (x < 10) return x;
	else return reduction_of_digits(sum_of_digits(x));
}

int main() {
	int n;
	cin >> n;
	
	cout << reduction_of_digits(n) << endl;
}
