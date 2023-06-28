#include<iostream>

using namespace std;

void reverse () {
	string word;
	
	if (cin >> word) {
		reverse();
		cout << word << endl;
	}	
}

int main() {	
	reverse();	
}
