#include<iostream>

using namespace std;

int main() {
    int r , c;
    cin >> r >> c;
    int sum = 0;
    
    for (int i = 0; i < r; ++i) {
        char coins;
        for (int j = 0; j < c; ++j) {
            cin >> coins;
            if (j%2 == i%2) sum += coins - ('0');
        }
    }
    cout << sum << endl;
}
        
