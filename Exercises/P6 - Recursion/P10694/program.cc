#include<iostream>

using namespace std;

void draw (int n) {
    if (n > 0) {
        draw(n - 1);
        draw(n - 1);
        
        for (int i = 0; i < n; ++i) cout << '*';
        
        cout << endl;
    }
}
        

int main() {
    int n;
    cin >> n;
    draw(n);
}
