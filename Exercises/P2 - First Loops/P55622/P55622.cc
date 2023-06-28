#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n < 10) {
        cout << "The number of digits of " << n << " is 1." << endl;
    }
    
    else {
        int aux = n;
        int counter = 1;
        while (n >= 10) {
            n /= 10;
            ++counter;
        }
        cout << "The number of digits of " << aux << " is " << counter << '.' << endl;
    }
}
