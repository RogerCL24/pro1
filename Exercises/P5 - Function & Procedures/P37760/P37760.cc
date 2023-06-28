#include<iostream>
#include<math.h>

using namespace std;

double true_angle (double angle) {
    double tangle = (angle*M_PI)/180;
    
    return tangle;
    
}

int main() {
    double angle;
    cout.setf(ios::fixed);
    cout.precision(6);
    
    while (cin >> angle) {
        cout << sin(true_angle(angle)) << ' ' << cos(true_angle(angle)) << endl;
    }
}
        
        
