#include<iostream>

using namespace std;

bool is_prime (int n, int divisor) {
	if (n < 2 or (n%divisor == 0 and n != divisor)) return false;
	if (divisor*divisor > n) return true;
	else return is_prime (n, ++divisor);	
}

int sum_of_prime (int n) {
	if (n < 10) return n;
	else return sum_of_prime(n/10) + n%10;
}

bool is_perfect_prime(int n) {
	if (n < 10) return is_prime(n, 2);
	
	else return (is_prime(n, 2) and is_perfect_prime(sum_of_prime(n)));
}

int main() {
	int n;
	cin >> n;
	cout << is_perfect_prime(n) << endl;
}
