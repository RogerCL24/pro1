#include<iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int sum = 0;
        int aux = n;
    
        while (n > 0) {
            sum += n%10;
            n /= 10;
        }
        cout << "The sum of the digits of " << aux << " is " << sum << '.' << endl;
    }

}
        
