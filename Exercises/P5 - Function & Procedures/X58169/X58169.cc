#include<iostream>

using namespace std;

void infoSequence(int& max, int& lpos) {
    int n;
    cin >> n;
    int counter = 1;
    
    while (n != 0) {
        if (n >= max) {
            max = n;
            lpos = counter;
        }
        ++counter;        
        cin >> n;
    }
}

int main() {
	int lpos, n;
	int max = 0;
	int counter = 1;
	
	infoSequence(max, lpos);
	cout << max << ' ' << lpos << ' ';
	
	cin >> n;
	while (n != 0 and n != max) {
		++counter;
		cin >> n;
	}
	
	if (n == max) cout << counter << endl;
	else cout << '-' << endl;
}
	
        
    
    
