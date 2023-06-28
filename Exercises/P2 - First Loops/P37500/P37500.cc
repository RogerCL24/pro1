#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    
    while (i < n + 1) {
        cout << n + i - n << endl;
        ++i;
    }
}
