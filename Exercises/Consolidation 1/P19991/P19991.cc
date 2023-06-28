#include<iostream>

using namespace std;

int main() {
    int size;
    cin >> size;
    
    char c;
    
    int diagonal1 = 0;
    int diagonal2 = 0;
    int sum = 0;
    
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> c;
            if (i == j) {
                diagonal1 += (int)(c - '0');
            }
            if ((size - (i)) == (j + 1)) {
                diagonal2 += (int)(c - '0');
            }
            if (size%2 != 0  and i == (size/2) and j == (size / 2)) {
                diagonal2 -= (int)(c - '0');
            }
        }
    }
    sum = diagonal1 + diagonal2;
    cout << sum << endl;
}
