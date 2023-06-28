#include<iostream>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    double n;
    cin >> n;
    double sum1 = 0;
    double sum2 = 0;
    
    for (int i = 0; i < n; ++i) {
        double x;
        cin >> x;
        
        sum1 += x*x;
        sum2 += x;
    }
    double var = 0;
    var = (1/(n - 1) * sum1) - (1/(n*(n-1)) * (sum2 * sum2));
    cout << var << endl;
}
