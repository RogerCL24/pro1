#include<iostream>

using namespace std;

void reverse (int& n) {
	string word;
	
	if (cin >> word) {
		reverse(n);
		--n;
		if(n >= 0) cout << word << endl;				
	}	
}

int main() {
	int n;
	cin >> n;	
	reverse(n);
}
