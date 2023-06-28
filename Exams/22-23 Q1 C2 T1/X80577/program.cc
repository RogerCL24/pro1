#include<iostream>
using namespace std;

int main() {
    int n; 
    while (cin >> n) {
        int max = n;
        int counter = 0;
        int length = 0;
        while (n != -1) {
            if (n <= 1 + max) {
                ++counter;
                if (counter > length) length = counter;
                if (n > max) max = n;
            }
            else {
                counter = 1;
                max = n;
            }
            
            cin >> n;
        }
        cout << length << endl;
    }
}
    
