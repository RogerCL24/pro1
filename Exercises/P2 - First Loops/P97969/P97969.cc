#include<iostream>

using namespace std;

int main() {
    char letter;
    int counter = 0;
    
    while (cin >> letter) {
        if (letter == 'a') ++counter;
    }
    cout << counter << endl;
}
