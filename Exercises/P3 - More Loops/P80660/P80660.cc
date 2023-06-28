#include<iostream>

using namespace std;

int main () {
    int n;
    
    while (cin >> n) {
        int counter = 0;
        
        while (n != 1) {
            if (n%2 == 0) {
                n /= 2;
                ++counter;
            }
            else {
                n *= 3;
                n += 1;
                ++counter;
            }
        }
        cout << counter << endl;
    }
}
