#include<iostream>

using namespace std;

int main() {
    char letter;
    bool found = false;
    int counter = 0;
    string aux;
    
    while (not found and letter != '.') {
    	cin >> letter;
    	
    	if (counter != 0) {
    		aux += letter;
    		--counter;
    	}
    	
    	if (letter == 'h') {
    		counter = 5;
    		aux = 'h';
    	}
    	if (aux == "hello") {
    		cout << "hello" << endl;
    		found = true;
    	}
    }
    if (not found) cout << "bye" << endl;
}    		
    

        
            
        
