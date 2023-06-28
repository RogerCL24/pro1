#include<iostream>

using namespace std;

int main() {
    int position;
    cin >> position;
    int counter = 0, confirm = 0;
    int x;
    while (cin >> x and counter != position) {
        ++counter;
        if (counter == position) confirm = x;
    }
    if (counter > position or counter < position or position == 0) cout << "Incorrect position." << endl;
    else cout << "At the position " << position << " there is a(n) " << confirm << '.' << endl;
}
        
