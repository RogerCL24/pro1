#include<iostream>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double c = 0, i = 0;
    int y = 0;
    string word;
    cin >> c >> i >> y >> word;
    double total = 0;
    
    if (word == "simple") {
        total = c + c * y * i/100;
        cout << total << endl;
    }
    else {
        for (int a = 0; a < y; ++a) {
            c += c*i/100;
        }
        cout << c << endl;
    }
}
    
            
            
            
            
        
