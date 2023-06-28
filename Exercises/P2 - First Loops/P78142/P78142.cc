#include<iostream>

using namespace std;

int main() {
    double n;
    double counter = 0;
    double sum = 0;
    
    while (cin >> n) {
        sum += n;
        ++counter;
    }
    double average = 0;
    average = sum / counter;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << average << endl;
}
    
        
