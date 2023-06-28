#include<iostream>

using namespace std;

int main () {
    char letter;
    int x, y;
    x = y = 0;
    
    while (cin >> letter) {
        if (letter == 'n') --y;
        else if (letter == 's') ++y;
        else if (letter == 'w') --x;
        else ++x;
    }
    cout << '(' << x << ", " << y << ')' << endl;
}
         
