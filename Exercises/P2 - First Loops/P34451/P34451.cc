#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int counter = 0;
    int x;
    
    while (cin >> x) {
        if (x%n == 0) ++counter;
    }
    cout << counter << endl;
}
