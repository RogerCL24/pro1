#include<iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int counter = x;
   
    if (x <= y) {
        while (x <= y - 1) {
            cout << x << ',';
            ++x;
            ++counter;
        }
    cout << counter << endl;
    }
    else cout << endl;
}
