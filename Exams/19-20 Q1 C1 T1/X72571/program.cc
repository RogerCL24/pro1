#include<iostream>
using namespace std;

int main() {
    int f, c;
    cin >> f >> c;
    
    int sum = 0;
    int sum_sen = 0;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            char n;
            cin >> n;
            sum += int(n - '0');
            if (i%2 == 0) sum_sen += int(n - '0');
        }
    }
    cout << sum << ' ' << sum_sen << endl;
}
