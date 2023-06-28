#include<iostream>

using namespace std;

void binary (int n) {
	if (n < 2) cout << n;
	else {
		binary(n/2);
		cout << n%2;
	}	
}

void octal (int n) {
	if (n < 8) cout << n;
	else {
		octal(n/8);
		cout << n%8;
	}	
}

void hexa (int n) {
	if (n < 16) {
		if (n < 10) cout << n;
		else cout << char('A' + n%16 - 10);
	}
	else {
		hexa(n/16);
		if (n%16 < 10) cout << n%16;
		else cout << char('A' + n%16 - 10);	
	}
}

int main() {
	int n;
	
	while (cin >> n) {
		cout << n << " = ";
		binary(n);
		cout << ", ";
		octal(n);
		cout << ", ";
		hexa(n);
		cout << endl;
	} 
}
