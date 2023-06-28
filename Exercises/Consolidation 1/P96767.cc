#include<iostream>

using namespace std;

int main() {
    double x;
    cin >> x;
    int counter = 0;
    double n;
    double power = 1;
    double total = 0;
    while (cin >> n) {

        total += n*power;
        power *= x;
    }
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << total << endl;
}
        
        
    
