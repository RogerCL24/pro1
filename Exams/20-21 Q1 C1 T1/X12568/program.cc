#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool yield = false;
    int counter = 0;
    int counter2 = 0; 
       
    for (int i = 0; i < n - 1; ++i) {
    
    	if (not yield) {
	 for (int j = 0; j < n; ++j) cout << '*';
	}	 
           if (yield) {
              ++counter;
              for (int x = 0; x < counter; ++x) cout << ' ';
               cout << '*';
               for (int x = n - 3 - counter2; x > 0; --x) cout << ' ';
               ++counter2;
               cout << '*';              
               }
                
            yield = true;
            cout << endl;
    }
    for (int i = 0; i < n - 1; ++i) {
    	cout << ' ';
    }
    cout << '*' << endl;
    
}

                    
        
