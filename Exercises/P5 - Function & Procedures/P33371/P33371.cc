#include<iostream>

using namespace std;

char encoded(char c, int k) {
    char output;
    
    if ('a' <= c and c <= 'z') output = 'A' + (c - 'a' + k)%('z' - 'a' + 1);
    
    else if (c == '_') output = ' ';
    
    else output = c;     
    
    return char(output);
}
    
    
int main() {
    char c;
    int k;
    
    while (cin >> k) {
    	cin >> c;
    	while (c != '.') {
       		cout << encoded(c, k);
       		
        	cin >> c;
        }
        cout << endl;
      
    }
}
