#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int reversed = 0;
    
    if (n != 0) {
        while (n != 0) {
            reversed = n%10;
            n /= 10;
            cout << reversed;
        }
        cout << endl;
    }
    else cout << 0 << endl;
}
