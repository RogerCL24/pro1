#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 2; i <= 16; ++i) {
        int counter = 0;
        
        int aux = n;
        
        while (aux != 0) {
            ++counter;
            aux /= i;
            
        }
        cout << "Base " << i << ": " << counter << " cifras." << endl;
    }
}
