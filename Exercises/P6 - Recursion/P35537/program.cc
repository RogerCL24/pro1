#include<iostream>

using namespace std;

bool is_increasing(int n) {
	if (n == 0) return true;
	else if (n != 0 and n%10 >= (n/10)%10) return is_increasing(n/10);
	
	else return false;	
}

int main() {
	int n;
	cin >> n;
	
	cout << is_increasing(n) << endl;
}
