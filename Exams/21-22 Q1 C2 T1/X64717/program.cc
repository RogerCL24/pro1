#include<iostream>

using namespace std;    

int words (char c) {
	bool word = false;
    	bool a = false;
    	bool end = false;
    	int counter = 0;
	while (not end) {
		if (c > 'a' and c <= 'z') word = true;
		
		else if (c == 'a') a = true;
		
		else {
			if (word and not a) ++counter;
			if (c == '$') end = true;
			a = false;
			word = false;
		}
		if (not end) cin >> c;
	}
	return counter;
}
	
int main() {
    char c;
    
    while (cin >> c) {
    	 cout << words(c) << endl;
	}
}
    
